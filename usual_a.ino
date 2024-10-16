// SNM - Sleptsov Net Machine in Arduino IDE, debugged on Raspberry Pi Pico
// SN in sn.h
// pin map in pin.h
// just to run SN, pin map can be omitted
static int dbg=0; // debug mode if dbg>0
volatile static int go=1;
unsigned long startTime;
static bool finalResultPrinted = false;

#include "matrix2.h"


// if no pin map included, please uncomment thefollowing plugs
// void Init_pins_IR(){}
// void ReadIn(){}
// void WriteOut(){}

// void setup() {

//   // init pins
//   // init interrupts
//   //Init_pins_IR();
//   if(dbg>0) {
//     Serial.begin(115200);
//     delay(1000);
//     Serial.print("SNM time in ms "); 
//     Serial.println(millis());
//   } 

// }
void setup() {
    
  // init pins
  // init interrupts
  //Init_pins_IR();
  Serial.begin(115200);
  delay(1000);
  
  startTime = micros(); // Record the start time
  
  if(dbg > 0) {
    Serial.print("SNM started at "); 
    Serial.println(startTime);
    Serial.print(" us\n");
  } 

}
#define MOFF(i,j,d1,d2) ((d2)*(i)+(j))
#define MELT(x,i,j,d1,d2) (*((x)+MOFF(i,j,d1,d2)))

//static int y[n]; 
static short int y[n];

void print_matr(short int *x,int d1,int d2)
{
  int i,j;
  for(i=0;i<d1;i++)
  {
    for(j=0;j<d2;j++)
    {
      Serial.print(MELT(x,i,j,d1,d2),2);
      Serial.print(" ");
    }
    Serial.println("");
  }
}

void print_vect(short int *x,int d1)
{
  int i;
  for(i=0;i<d1;i++)
  {
    Serial.print(x[i]);
    Serial.print(" ");
  }
  Serial.println("");

}

#define zmin(x,y) (((x)<(y))?(x):(y))

static int i,j,yy,jj,yij,k=0;  

void loop() {
  
    while(go) 
    {
      // ReadIn();
if(dbg>0) {Serial.print("sn-vm step "); Serial.print(k); Serial.print(" time in ms "); Serial.println(millis()); }
if(dbg>0) print_vect(mu,m); 
      // y[j] = firing multiplicity = INT_MAX !!!

      for(j=0;j<n;j++) y[j]=SHRT_MAX;
      
      for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
          short int Bij = B[i][j];
          short int mu_i = mu[i];
          short int yij = (Bij > 0) ? mu_i / Bij : (Bij < 0) ? ((mu_i > 0) ? 0 : SHRT_MAX) : SHRT_MAX;
          //yij = (B[i][j]>0)? mu[i] / B[i][j] : (B[i][j]<0)? ((mu[i]>0)? 0: INT_MAX): INT_MAX;
          y[j]=zmin(y[j],yij);
        }                  
      
if(dbg>1){
Serial.print("y#1: ");          
print_vect(y,n);}       
      
      //remove low priority transitions
      
      for(j=0;j<n;j++)
        for(i=0;i<n;i++)
        {
          if(i==j) continue;
          if((short int)R[i][j] > 0 && y[i] != 0) 
            y[j]=0;
        }
if(dbg>1){
Serial.print("y#2: ");              
print_vect(y,n);}            
 
      // count firable and choose firing
      short int jj=-1;	 
      for(j=0;j<n;j++)
	      if(y[j]>0){jj=j; break;}

      if(jj==-1) {go=0; break;}
       
      short int yy=y[jj];
if(dbg>0) { Serial.print("fires "); Serial.print(jj); Serial.print(" in "); Serial.print(yy); Serial.println(" copies"); }      

      // mu[i] = mu[i] + yy*c[i][jj];  next marking
      
      for(i=0;i<m;i++)
      {  
        short int Bij = B[i][jj];
        short int Dij = D[i][jj];
        //short int mu_i = mu[i];
        mu[i] = mu[i] - ((Bij > 0) ? yy * Bij : 0) + yy * Dij;
        //mu[i] = mu[i] - ((B[i][jj]>0)?yy*B[i][jj]:0) + yy*D[i][jj];
      }
      k++;   
        // WriteOut();
    } 
     if (!go && !finalResultPrinted) {
    unsigned long endTime = micros();
    Serial.print("Final mu: ");
    print_vect(mu, m);
    Serial.print("Final y: ");
    print_vect(y, n);
    Serial.print("SNM started at ");
    Serial.print(startTime);
    Serial.print(" us and ended at ");
    Serial.print(endTime);
    Serial.println(" us,");
    Serial.print(" total time is");
    Serial.print(endTime-startTime);
    Serial.println(" us");
    Serial.print("Total number of steps: ");
    Serial.println(k);
    finalResultPrinted = true;
  }
}

// @ Dmitry Zaitsev, May 25, 2024, daze@acm.org