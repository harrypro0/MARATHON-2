#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    printf("ASCII value of '%c'=%d\n",ch,ch);
    printf("ch+1=%d,which is the character '%c'\n",ch+1,ch+1);
    return 0;
}
