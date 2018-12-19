#include<stdio.h>
#include<sys/types.h>
#include<math.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    float a,ans=1.0f;
    int b,i,fact=1;
    a=atof(argv[1]);     //converts character pointer argument to float
    b=atoi(argv[2]);     //converts character pointer argument to int
    for(i=1;i<b;i++)
    {
        ans=ans+(pow(a,i)/(fact=fact*i));   
    }
    printf("\n Child(PID=%d):for a=%0.1f the first %d terms yield %f",getpid(),a,b,ans);
}

