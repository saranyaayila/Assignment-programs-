
#include <stdio.h>

int main()
{
    int mark;

    printf("Enter mark: ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
    {
        printf("Invalid mark");
    }
    else if (mark >= 90)
    {
        printf("Grade O");
    }
    else if (mark >= 80)
    {
        printf("Grade A+");
    }
    else if (mark >= 70)
    {
        printf("Grade A");
    }
    else if (mark >= 60)
    {
        printf("Grade B");
    }
    else if (mark >= 50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
