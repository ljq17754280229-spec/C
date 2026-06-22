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
    int k,now=n,add=0;       //烟蒂数量,剩余数量,新增数量
    for(k=1;;k++)
    {   
        if(k % K == 0)
        {
            add++;
        }
        now=n-k+add;
        if(now>0)
            continue;
        else
            break;
    }
    return k;
    
}