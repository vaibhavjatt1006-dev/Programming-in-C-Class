#include <stdio.h>

int main()
{
    int a, b;

    printf("enter first number:");
    scanf("%d", &a);

    printf("enter second number:");
    scanf("%d", &b);

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    printf("gcd is %d", a);

    printf("\nVaibhav 125113039");

    return 0;
}