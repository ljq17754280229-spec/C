#include <stdio.h>
int main(void)
{
    int n, i, capacity;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        i = 0;
        capacity = 1;
        if (n == 0)
        {
            break;
            ;
        }
        else
        {
            while (capacity < n)
            {
                capacity = capacity * 3;
                i++;
            }
        }
        printf("%d\n", i);
    }
    return 0;
}