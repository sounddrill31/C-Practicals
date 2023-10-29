#include <stdio.h>
void main()
{
    int y;
    clrscr();
    printf("Enter year:\n");
    scanf("%d",&y);
    if(((y % 4 == 0) && (y % 100 !=0)) || (y % 400==0))
    {
        print("%d is a leap year!\n",y);
    }
    else
    {
        print("%d is not a leap year!\n",y);
    }
}
