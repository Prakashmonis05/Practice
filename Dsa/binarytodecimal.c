#include <stdio.h>

void decimalToBinary(int n)
{
    int binary[32];
    int i = 0;

    if (n == 0)
    {
        printf("Binary = 0");
        return;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
}

int binaryToDecimal(long long binary)
{
    int decimal = 0;
    int base = 1;
    int digit;

    while (binary > 0)
    {
        digit = binary % 10;

        decimal = decimal + digit * base;

        base = base * 2;
        binary = binary / 10;
    }

    return decimal;
}

int main()
{
    int choice;
    int decimal;
    long long binary;

    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        decimalToBinary(decimal);
    }
    else if (choice == 2)
    {
        printf("Enter binary number: ");
        scanf("%lld", &binary);

        printf("Decimal = %d", binaryToDecimal(binary));
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}