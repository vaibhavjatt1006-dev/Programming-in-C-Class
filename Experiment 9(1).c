#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER OF NUMBERS YOU WANT TO TAKE AVERAGE OF:");
    scanf("%d", &n);

    float num[n], avg, sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("ENTER NUMBER %d:", i + 1);
        scanf("%f", &num[i]);
    }

    for (int j = 0; j < n; j++)
    {
        sum = sum + num[j];
    }

    avg = sum / n;

    printf("AVERAGE OF NUMBERS IS %f\n", avg);
    printf("Vaibhav 125113039");

    return 0;
}