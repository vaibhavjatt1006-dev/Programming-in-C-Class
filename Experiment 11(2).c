#include <stdio.h>

void sum_avg(int a, int b)
{
    printf("SUM OF BOTH INTEGERS IS %d\n", a + b);
    printf("AVERAGE OF BOTH INTEGERS IS %f\n", (a + b) / 2.0);
}

int main()
{
    int a, b;

    printf("ENTER FIRST NUMBERS:");
    scanf("%d", &a);

    printf("ENTER SECOND NUMBERS:");
    scanf("%d", &b);

    sum_avg(a, b);

    printf("Vaibhav 1251113039");

    return 0;
}