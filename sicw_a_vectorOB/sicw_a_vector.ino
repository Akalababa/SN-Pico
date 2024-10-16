// SNM - Sleptsov Net Machine in Arduino IDE, debugged on Raspberry Pi Pico
// SN in sn.h
// pin map in pin.h
// just to run SN, pin map can be omitted
static int dbg=0; // debug mode if dbg>0
volatile static int go=1;
unsigned long startTime;
static bool finalResultPrinted = false;

#include "pol5_sparse.h"

// #include "pin.h"

// if no pin map included, please uncomment thefollowing plugs
// void Init_pins_IR(){}
// void ReadIn(){}
// void WriteOut(){}

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

static int y[n]; 

void print_matr(int *x,int d1,int d2)
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

void print_vect(int *x,int d1)
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
    //int print_results = 0; // To control the printing of final results
    while(go) 
    {
      //ReadIn();
if(dbg>0) {Serial.print("sn-vm step "); Serial.println(k); Serial.print(" time in ms "); Serial.println(micros()); }
if(dbg>0) print_vect(mu,m); 
      // y[j] = firing multiplicity = INT_MAX !!!

      for (int j = 0; j < n; j++) {
            y[j] = INT_MAX; // Initialize y[j] to a large value

            for (int i = tbs[j]; i < (j < n - 1 ? tbs[j + 1] : KB); i++) {
                int pb = bs[i][0];
                int wb = bs[i][1];
                int yij = (wb > 0) ? mu[pb] / wb : (wb < 0) ? ((mu[pb] > 0) ? 0 : INT_MAX) : INT_MAX;
                y[j] = (y[j] < yij) ? y[j] : yij;
            }
        }
        
         for (int j = 0; j < n; j++) {
            for (int i = trs[j]; i < trs[j + 1]; i++) {
                int r_value = rs[i][1]; // Get value from rs for the corresponding transition
                if (r_value > 0 && y[rs[i][0]] != 0) {
                    y[j] = 0;
                }
            }
        }

        // Find the next transition to fire
        int jj = -1;
        for (int j = 0; j < n; j++) {
            if (y[j] > 0) {
                jj = j;
                break;
            }
        }

        if (jj == -1) {
            go = false;
            break;
        }

        int yy = y[jj];

        for (int i = 0; i < m; i++) {
            int b_value = 0;
            int d_value = 0;
            for (int x = tbs[jj]; x < (jj < n - 1 ? tbs[jj + 1] : KB); x++) {
                if (bs[x][0] == i) {
                    b_value = bs[x][1];
                    break;
                }
            }
            for (int x = tds[jj]; x < (jj < n - 1 ? tds[jj + 1] : KD); x++) {
                if (ds[x][0] == i) {
                    d_value = ds[x][1];
                    break;
                }
            }
            mu[i] = mu[i] - ((b_value > 0) ? yy * b_value : 0) + yy * d_value;
        }

        k++;
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
    Serial.println(" us");
    Serial.print("Total time is ");
    Serial.print(endTime-startTime);
    Serial.println(" us");
    Serial.print("Total number of steps: ");
    Serial.println(k);
    finalResultPrinted = true;
  }
  // if (print_results) {
  //   Serial.print("Final mu: ");
  //   print_vect(mu, m);
  //   Serial.print("Final y: ");
  //   print_vect(y, n);
  // }
    
}
