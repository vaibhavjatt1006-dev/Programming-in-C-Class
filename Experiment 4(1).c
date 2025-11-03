#include <stdio.h>

int main()
{
    float a,b,c;

    printf("Enter First Number: ");
    scanf("%f",&a);

    printf("Enter Second Number:");
    scanf("%f",&b);

    printf("Enter Third Number:");
    scanf("%f",&c);

    if (a>b)
    {
        if (a>c)
            printf("%.2f is the largest number\n",a);
        else
            printf("%.2f is the largest number\n",c);
    }
    else
    {
        if (b>c)
            printf("%.2f is the largest number\n",b);
        else
            printf("%.2f is the largest number\n",c);
    }

    printf("Vaibhav 125113039");
    return 0;
}