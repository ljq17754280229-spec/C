#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[20];
    int score;
} Student;
void sort_students(Student students[], int n);

int main(void)
{
    int n;
    scanf("%d", &n);      // 输入一个整数n表示学生个数
    Student students[20]; // 假设最多有20个学生
// 输入
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", students[i].name, &students[i].score);
    }

    sort_students(students, n);
// 输出
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", students[i].name, students[i].score);
    }

    return 0;
}

void sort_students(Student students[], int n)    // 按照成绩高到低排序
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (students[j].score < students[j + 1].score)
            {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
            if (students[j].score == students[j + 1].score) // 如果成绩相等则序小的在前
            {
                if (strcmp(students[j].name, students[j + 1].name) > 0)
                {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }
}