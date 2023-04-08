#include<stdio.h>
void main()
{
    int a;
    printf("enter year");
    scanf("%d",&a);
    if((a%400==0))
    {
        printf("%d=leap year",a);
    }
    else if(a%100==0)
    {
        printf("%d is not leap year",a);

    }
    else if(a%4==0){
        printf("%d is  leap year", a);
    }

}