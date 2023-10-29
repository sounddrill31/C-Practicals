#include <stdio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter two numbers!\n");
    scanf("%d %d",&a,&b);
    printf("Enter another number!\n");
    scanf("%d",&c);
    if((c%a==0)&&(c%b==0))
    {
        printf("%d is divisible by both %d and %d!\n",c,a,b);
    }
    else
    {
        printf("%d is not divisible by both %d and %d!\n",c,a,b);
    }

}
