#include <stdio.h>
int nums[1000005] = {0};
int main()
{
    int n, a, b;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        nums[a - 1]++;
        nums[b]--;
    }
    int current = 0;
    for (int j = 0; j < n; j++)
    {
        current = nums[j] + current;
        nums[j] = current;
        printf("%d ", nums[j]);
    }
    return 0;
}