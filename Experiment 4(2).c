#include <stdio.h>

int main()
{
    float a,b,c,largest;

    printf("Enter First Number:");
    scanf("%f",&a);

    printf("Enter Second Number:");
    scanf("%f",&b);

    printf("Enter Third Number:");
    scanf("%f",&c);

    largest=(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("%f is the largest number\n",largest);

    printf("Vaibhav 125113039");
    return 0;
}