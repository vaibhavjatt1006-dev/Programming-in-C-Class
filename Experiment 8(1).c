#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        for (k = 0; k < 5 - i; k++)
        {
            printf(" ");
        }

        for (j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("Vaibhav 125113039");

    return 0;
}