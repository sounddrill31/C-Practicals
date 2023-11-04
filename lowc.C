#include <stdio.h>
void main()
{
    char ch;
    clrscr();
    printf("Enter an alphabet!\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c is uppercase!\n",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is lowercase\n",ch);
    }
    else
    {
        printf("%c is not an alphabet\n",ch);
    }
}
