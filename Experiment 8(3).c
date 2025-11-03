#include <stdio.h>
int main()
{
    int num, prm = 1;
    printf("ENTER NUMBER:");
    scanf("%d", &num);
    printf("PRIME FACTORS ARE-\n");
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            prm = 1;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prm = 0;
                    break;
                }
            }
            if (prm == 1)
            {
                printf("%d\n", i);
            }
        }
    }
    printf("Vaibhav 125113039");
    return 0;
}