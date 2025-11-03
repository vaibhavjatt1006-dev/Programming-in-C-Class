#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter number of rows for first matrix:");
    scanf("%d", &a);

    printf("enter number of columns for first matrix or number of rows in second matrix :");
    scanf("%d", &b);

    printf("enter number of columns second for first matrix:");
    scanf("%d", &c);

    int mat1[a][b], mat2[b][c], mat3[a][c];

    printf("for first matrix\n");
    for (int i=0; i < a; i++)
    {
        for (int j=0; j < b; j++)
        {
            printf("enter number in (%d,%d):", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("for second matrix\n");
    for (int i = 0; i < b; i++)
    {
        for (int j=0; j < c; j++)
        {
            printf("enter number in (%d,%d):", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i=0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat3[i][j]=0;
        }
    }

    for (int i=0; i < a; i++)
    {
        for (int j=0; j < c; j++)
        {
            for (int k=0; k < b; k++)
            {
                mat3[i][j] = mat1[i][k] * mat2[k][j] + mat3[i][j];
            }
        }
    }

    printf("product matrix is-\n");
    for (int i=0; i < a; i++)
    {
        for (int j=0; j < c; j++)
        {
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    printf("Vaibhav 125113039");
    return 0;
}