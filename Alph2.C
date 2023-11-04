#include <stdio.h>
void main()
{
    char ch;
    clrscr();
    printf("Enter any character:\n");
    scanf("%c",&ch);
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("character is an alphabet\n");
    }
    else
    {
        printf("character is not an alphabet\n");
    }
}
