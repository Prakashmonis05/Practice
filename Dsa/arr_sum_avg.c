#include <stdio.h>

int sum(int a[], int n)
{
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }

    return s;
}

int main()
{
    int a[100], n, total;
    float average;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    total = sum(a, n);
    average = (float)total / n;

    printf("Sum = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}