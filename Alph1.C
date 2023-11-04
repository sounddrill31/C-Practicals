#include <stdio.h>
void main()
{
    char ch;
    clrscr();
    printf("Enter any character:\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("character is an alphabet\n");
    }
    else
    {
        printf("character is not an alphabet\n");
    }
}
