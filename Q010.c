#include<stdio.h>
#define S 250
int calculate_days(int x,int n);

int main(void)
{
    int x,n,days;
    scanf("%d %d",&x,&n);
    days=calculate_days(x,n);
    printf("%d",S*days);
    return 0;
}
int calculate_days(int x,int n)
{
    int sum,j,i,count=0,days;
    sum=x+n;

    for(i=x;i<sum;i++)
    {
        if(i%7==6|| i%7==0)
        {
            count++;
        }
    }
    days=n-count;
    return days;
}