#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("ENTER NUMBER TO SUM TILL IT:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("SUM OF FIRST %d NATURAL NUMBERS IS %d\n", n, sum);
    printf("Vaibhav 125113039");

    return 0;
}