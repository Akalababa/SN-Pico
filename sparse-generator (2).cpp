//sparse matrix generator 
#include <stdio.h>
#include "pol2.h"
int main() 
{
	FILE *file;
	file = fopen("pol2_NBn.h", "w");
    if (file == NULL) 
	{
        perror("Error opening file");
        return -1;
    }
    fprintf(file,"// Sleptsov-net in sparse matrix format\n");
    int kb = 0, kd = 0, kr = 0;
    int i, j, t = 0;
    int tbs[n + 1], tds[n + 1], trs[n + 1]; // n+1 to handle the end of the last column
	
	//regular B
	for (i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
		{
            if (B[i][j] > 0) 
                B[i][j] += 1;
			else if(B[i][j] == -1)
				B[i][j] = 1;
			else
				B[i][j] = 0;
		}
    // Calculate KB, KD, and KR
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) 
            if (B[i][j] != 0)
                kb++;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (D[i][j] != 0)
                kd++;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (R[i][j] != 0)
                kr++;
	
    fprintf(file,"#define m %d\n", m);
    fprintf(file,"#define n %d\n", n);
    fprintf(file,"#define KB %d\n", kb);
    fprintf(file,"#define KD %d\n", kd);
    fprintf(file,"#define KR %d\n", kr);

    // Print bs array and calculate tbs array
    fprintf(file,"static int bs[%d][2] = {\n", kb);
    int count = 0;
    t = 0; // Reset t for bs
    for (j = 0; j < n; j++) 
	{
        tbs[j] = t; // Save the start index of each column
        for (i = 0; i < m; i++)
            if (B[i][j] != 0) 
			{
                fprintf(file,"{%d, %d}%s\n", i, B[i][j], (count == kb - 1) ? "};" : ",");
                count++;
                t++;
            }
    }
    tbs[n] = kb; // End of the last column

    // Print tbs array
    fprintf(file,"static int tbs[%d] = {", n + 1);
    for (i = 0; i <= n; i++)
        fprintf(file,"%d%s", tbs[i], (i == n) ? "};" : ", ");
    fprintf(file,"\n");

    // Print ds array and calculate tds array
    fprintf(file,"static int ds[%d][2] = {\n", kd);
    count = 0;
    t = 0; // Reset t for ds
    for (j = 0; j < n; j++) 
	{
        tds[j] = t; // Save the start index of each column
        for (i = 0; i < m; i++)
            if (D[i][j] != 0) 
			{
                fprintf(file,"{%d, %d}%s\n", i, D[i][j], (count == kd - 1) ? "};" : ",");
                count++;
                t++;
            }
    }
    tds[n] = kd; // End of the last column

    // Print tds array
    fprintf(file,"static int tds[%d] = {", n + 1);
    for (i = 0; i <= n; i++)
        fprintf(file,"%d%s", tds[i], (i == n) ? "};" : ", ");
    fprintf(file,"\n");

    // Print rs array and calculate trs array
    fprintf(file,"static int rs[%d][3] = {\n", kr);
    t = 0; // Reset t for rs
    count = 0;
    for (i = 0; i < n; i++) 
	{
        trs[i] = t; // Save the start index of each column
        for (j = 0; j < n; j++)
            if (R[i][j] != 0) 
			{
                fprintf(file,"{%d, %d, %d}%s\n", i, j, R[i][j], (count == kr - 1) ? "};" : ",");
                t++;
                count++;
            }
    }
    trs[n] = kr; // End of the last column

    // Print trs array
    fprintf(file,"static int trs[%d] = {", n + 1);
    for (i = 0; i <= n; i++)
        fprintf(file,"%d%s", trs[i], (i == n) ? "};" : ", ");
    fprintf(file,"\n");

    //Print mu array
    fprintf(file,"static int mu[%d] = {", m);
    for (i = 0; i < m; i++)
        fprintf(file,"%d%s", mu[i], (i == m - 1) ? "};" : ", ");
    fprintf(file,"\n");
    
    //vector 
    int vector[n];
	int k = 0, l = 0, sum;
	while(k < n)
	{
		for(i = 0;i < n;i++)
		{
			sum = 0;
			for(j = 0; j < n; j++)
			{
				sum += R[j][i]; //求i列和 
			}
			if(sum == 0)         //i列和为0，意味着此时没有比ti更高优先级的迁移 
			{
				for(j = 0; j < k; j++)
				{
					if(i != vector[j])  //判断当前vector里是否已有该迁移序号 
						continue;
					else
						break;
				}	
				if(j == k)
				{
					vector[k] = i;  //没有就存入 
					k++;
				}	
			}
		}
		while(l<k)
		{
			for(j = 0; j < n; j++)
				R[vector[l]][j] = 0;  //存入后将i行所有元素置为0 显示出下一级优先级
			l++;
		}
		l = k;	
	}
	
 	// 打印排序后的优先级
    fprintf(file, "static int vector[%d] = {", n);
    for (int i = 0; i < n; i++)
    {
    	fprintf(file,"%d%s", vector[i], (i == n-1) ? "};\n" : ", ");
	}
	
	fclose(file);
    printf("Data has been written to the file.\n");
    return 0;
}
