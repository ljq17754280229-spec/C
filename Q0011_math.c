#include<stdio.h>
int calculate(int n,int k);
int main(void)
{
    int n,K;
    scanf("%d %d",&n,&K);  //n根烟，K个烟蒂
    printf("%d",calculate(n,K));   //一共吸了k  
    return 0;
}
int calculate(int n,int K)
{
    return n + (n-1)/(K-1);//相当于K-1个烟蒂换一根烟，另外总数还要减去一根
}