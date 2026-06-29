#include <stdio.h>

typedef struct
{
    int length; // 定义长
    int width;  // 定义宽
} a; 

int main(void)
{
    int li, wi, n = 0;
    a array[1005];
    char c;
    
    while(scanf("%c",&c) != EOF)
    {
        if(c == '[')
        {
            if(scanf("%d,%d", &li, &wi) == 2)
            {
                array[n].length = li;
                array[n].width = wi;
                n++;
            }
        }
    }
    
    int maxlen = 0;
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        // 必须用 < 挑出较小的值（短板原理）！
        int current_k = (array[i].length < array[i].width) ? array[i].length : array[i].width;
        
        // 如果打破最高纪录，立即更新！
        if (current_k > maxlen) 
        {
            maxlen = current_k;
        }
    }
    
    // 【第二波扫街】
    for (int i = 0; i < n; i++) 
    {
        // 补充完整：再次算出当前矩形的短板，逻辑和上面一模一样！
        int current_k = (array[i].length < array[i].width) ? array[i].length : array[i].width;
        
        // 如果它等于最高纪录，英雄入列，人数 +1！
        if (current_k == maxlen) 
        {
            count++;
        }
    }
    
    // 打印最终战果
    printf("%d\n", count);
    
    return 0;
}


