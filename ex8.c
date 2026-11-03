#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   int result;
   printf(" a\n");
   printf(" b\n");
   printf("c\n");
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   result=a+b*c-a/b%c;
   printf("result=%d\n",result);
    return 0;
}
