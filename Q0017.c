#include<stdio.h>
int main(void)
{
    int n,i,capacity;
    while(1)
    {
        i=0;
        capacity=1;
        scanf("%d",&n);         //硬币个数
        if(n==0)
        {
            break;;
        }
        else
        {
            while(capacity<n)
            {
                capacity=capacity*3;
                i++;
            }
        }
        printf("%d\n",i);
    }
    return 0;
}