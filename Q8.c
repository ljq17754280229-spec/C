#include<stdio.h>
int main(void)
{
    int array[100],i,count,max,min;
    char c;
    i=0;
    count=0;
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
    max=array[0];
    min=array[0];
    for(int k=1;k<i;k++)
    {
        if(array[k]>max)
        {
            max=array[k];
        }
        if(array[k]<min)
        {
            min=array[k];
        }
    }
    for(int j=0;j<i;j++)
    {
        if(array[j]>min && array[j]<max)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}