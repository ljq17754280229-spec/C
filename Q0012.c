#include<stdio.h>
int main(void)
{
    int n,total;
    scanf("%d",&n);//饮料数量
    total=n+(n-1)/2;
    printf("%d",total);
    return 0;
}