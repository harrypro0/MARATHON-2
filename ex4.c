#include <stdio.h>
#include <stdlib.h>

int main()
{
    double price,discount,final_price;
    printf("enter price, discount:");
    scanf("%1f %1f",&price,&discount);
    final_price=price-(discount*price/100);
    printf("final_price=%.2f",final_price);
    return 0;
}
