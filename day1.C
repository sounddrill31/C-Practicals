#include <stdio.h>
void main()
{
    int weeknum;
    clrscr();
    printf("Enter a number between 1 and 7\n");
    scanf("%d",&weeknum);
    if(weeknum>=1&&weeknum<=7)
    {
        if(weeknum==1)
        {
            printf("Monday!");
        }
        else if(weeknum==2)
        {
            printf("Tuesday!");
        }
        else if(weeknum==3)
        {
            printf("Wednesday!");
        }
        else if(weeknum==4)
        {
            printf("Thursday!");
        }
        else if(weeknum==5)
        {
            printf("Friday!");
        }
        else if(weeknum==6)
        {
            printf("Saturday!");
        }
        else if(weeknum==7)
        {
            printf("Sunday!");
        }
    }
    else
    {
        printf("error!");
    }
}
