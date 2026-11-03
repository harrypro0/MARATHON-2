#include <stdio.h>
#include <stdlib.h>

int main()
{
    double simpleinterest,principal,rate,time;
    printf("enter principal,rate(%%),time(years):");
    scanf("%1f %1f %1f",&principal,&rate,&time);

    simpleinterest=(principal*rate*time)/100;
    printf("simple interest=%.3f",simpleinterest);

    return 0;
}
