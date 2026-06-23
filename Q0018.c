#include <stdio.h>

void process(int nums[], int n);
void judge_odd(int nums[], int n);

int main(void)
{
    int nums[505], N, i; // 数组,N个正整数
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]); // 往数组里填数字
    }
    process(nums, N);
    judge_odd(nums, N);

    return 0;
}

void process(int nums[], int n) // 升序排列
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (nums[j + 1] < nums[j])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

void judge_odd(int nums[], int n) // 输出奇数
{
    int k;
    int is_first = 1;       // 固定第一个是奇数
    for (k = 0; k < n; k++)
    {
        if (nums[k] % 2 != 0)
        {
            if (is_first == 1)
            {
                printf("%d", nums[k]);      // 如果是奇数就只输出数字
                is_first = 0;
            }
            else
            {
                printf(",%d", nums[k]);
            }
        }
    }
}
