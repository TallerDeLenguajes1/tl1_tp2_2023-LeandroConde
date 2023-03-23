#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){
    
    double vt[N];
    double *vectorPunt;

    vectorPunt = &vt[0];
    
    /*for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;

        printf("%f \n", vt[i]);
    }
    */

   while(*vectorPunt != '\0')
    {
        *vectorPunt =1+rand()%100;

        printf("%f \n", *vectorPunt);
        vectorPunt++;
    }

    return 0;
}