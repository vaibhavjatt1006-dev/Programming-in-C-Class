#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf("ENTER FIRST NUMBER: ");
    scanf("%d", &num1);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d", &num2);

    printf("BEFORE SWAPPING NUM1=%d AND NUM2=%d\n", num1, num2);

    swap(&num1, &num2);

    printf("AFTER SWAPPING NUM1=%d AND NUM2=%d\n", num1, num2);

    printf("Vaibhav 125113039");

    return 0;
}