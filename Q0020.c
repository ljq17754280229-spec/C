#include <stdio.h>
int main(void)
{
    int n, a, b, i;
    int nums[100005] = {0};
    scanf("%d", &n); //  涂气球的次数和气球总个数
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        for (int j = a; j <= b; j++)
        {
            nums[j - 1]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}