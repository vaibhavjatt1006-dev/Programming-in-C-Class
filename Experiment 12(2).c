#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("ENTER FIRST STRING:");
    scanf("%s", &str1);

    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = str1[i];

    printf("SECOND STRING IS: %s\n", str2);
    
    printf("Vaibhav 125113039");

    return 0;
}