#include <stdio.h>

int isprime(int a)
{
    if (a == 2)
    {
        return 1;
    }
    else
    {
        int b = 0;
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                b = 0;
                break;
            }
            else
            {
                b = 1;
            }
        }
        return b;
    }
}

int main()
{
    int a;
    printf("ENTER NUMBER TO CHECK PRIME OR NOT:");
    scanf("%d", &a);

    isprime(a);

    if (isprime(a))
    {
        printf("ENTERED NUMBER IS PRIME.\n");
    }
    else
    {
        printf("ENTERED NUMBER IS NOT PRIME.\n");
    }
    printf("Vaibhav 125113039");

    return 0;
}