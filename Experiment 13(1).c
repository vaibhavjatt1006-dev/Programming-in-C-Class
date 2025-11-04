#include <stdio.h>

int main()
{
    int n1, n2, *ptr1, *ptr2, sum, diff;

    printf("ENTER FIRST NUMBER: ");
    scanf("%d", &n1);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d", &n2);

    ptr1 = &n1;
    ptr2 = &n2;

    sum = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;

    printf("SUM OF NUMBERS IS: %d\n", sum);
    printf("DIFFRENCE OF NUMBERS IS: %d\n", diff);

    printf("Vaibhav 125113039");

    return 0;
}