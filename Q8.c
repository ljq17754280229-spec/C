#include<stdio.h>
int main(void)
{
    int array[100],i,j;
    char c;
    i=0;
    while (scanf("%c",&c)==1)
    {
        if(c=='[')
            continue;
        if(c==',')
            continue;
        if(c==']')
            break;
        ungetc(c,stdin);
        scanf("%d",&array[i]);
        i++;
    }
    printf("%d",i-2);
    return 0;
}