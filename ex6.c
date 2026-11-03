#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,firstnum,secondnum,thirdnum;
    printf("enter firstnum:");
    scanf("%d",&firstnum);
    printf("enter secondnum:");
    scanf("%d",&secondnum);
    printf("enter thirdnum\n");
    scanf("&d",&thirdnum);
    sum=firstnum+secondnum+thirdnum;
    printf("sum=%d\n",sum);
    return 0;
}
