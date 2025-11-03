#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count = 0, j;

    printf("ENTER FIRST STRING:");
    scanf("%s", &str1);

    printf("ENTER SECOND STRING:");
    scanf("%s", &str2);

    printf("FIRST STRING IS: %s\n", str1);
    printf("SECOND STRING IS: %s\n", str2);

    for (int i=0; str1[i] != '\0'; i++)
    {
        count++;
    }

    for (j=0; str2[j] != '\0'; j++)
    {
        str1[count + j] = str2[j];
    }

    str1[count + j] = '\0';

    printf("CONCATENATED STRING IS: %s\n", str1);

    printf("Vaibhav 125113039");

    return 0;
}