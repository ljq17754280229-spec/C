#include <stdio.h>
double fun(int n)
{
    int a,b,c,i;
    double s;
    s=0;
    a=2;
    b=1;
    for(i=1;i<=n;i++)
    {
        s=s+(double)a/b;
        c=a;
        a=a+b;
        b=c;
    }
    return s;
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%lf\n",fun(n));
}