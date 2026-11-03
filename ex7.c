#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    int denom[]={500,100,50,25,10,5};
    int i;
   printf("Enter amount in fcfa(multiples of 5):");
   scanf("%d",&amount);
   for (i=0;i<6;i++){
    printf("%3d fcfa*%d\n",denom[i],amount/denom[i]);
    amount=amount%denom[i];
   }
    return 0;
}
