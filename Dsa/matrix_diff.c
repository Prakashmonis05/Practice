#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], diff[10][10];
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter first matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtraction
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of the matrices:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", diff[i][j]);
        }

        printf("\n");
    }

    return 0;
}