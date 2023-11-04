#include <stdio.h>
void main()
{
    char ch;
    printf("Enter number:\n");
    scanf("%c",&ch);
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("%c is a character\n",ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("%c is a digit\n",ch);
    }
    else
    {
        printf("%c is a special character\n",ch);
    }

}
