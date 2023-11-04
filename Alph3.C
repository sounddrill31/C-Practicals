#include <stdio.h>
void main()
{
    char ch;
    clrscr();
    printf("Enter a Character\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a character!\n",ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("%c is a digit\n",ch);
    }
    else
    {
        printf("%c is a special character\n",ch);
    }
}
