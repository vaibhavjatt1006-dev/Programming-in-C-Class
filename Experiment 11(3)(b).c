#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    int a, b;

    printf("enter first number:");
    scanf("%d", &a);

    printf("enter second number:");
    scanf("%d", &b);

    printf("gcd is %d \n", gcd(a, b));

    printf("\nVaibhav 125113039");

    return 0;
}