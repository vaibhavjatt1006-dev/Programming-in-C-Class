#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("ENTER NUMBER OF ELEMENTS TO ADD: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d. ENTER NUMBER: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
    }

    printf("SUM OF TOTAL NUMBERS IS %d\n", sum);
    printf("Vaibhav 125113039");

    return 0;
}