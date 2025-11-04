#include <stdio.h>

int main()
{
    char text[100];
    FILE *fp;

    fp = fopen("file2.txt", "a");
    if (fp == NULL)
    {
        printf("!! ERROR OPENING FILE FOR WRITING\n");
        return 1;
    }

    printf("ENTER TEXT TO APPEND TO FILE: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);

    fclose(fp);

    fp = fopen("file2.txt", "r");
    if (fp == NULL)
    {
        printf("!! ERROR OPENING FILE FOR READING\n");
        return 1;
    }

    printf("\nCONTENT OF FILE:\n");
    while (fgets(text, sizeof(text), fp) != NULL)
    {
        printf("%s", text);
    }

    fclose(fp);

    printf("\nVaibhav 125113039");

    return 0;
}