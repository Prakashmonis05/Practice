#include <stdio.h>

int octalToDecimal(int octal)
{
    int decimal = 0;
    int base = 1;
    int digit;

    while (octal > 0)
    {
        digit = octal % 10;
        decimal = decimal + digit * base;
        base = base * 8;
        octal = octal / 10;
    }

    return decimal;
}

void decimalToHexadecimal(int decimal)
{
    char hex[20];
    int i = 0, remainder;

    if (decimal == 0)
    {
        printf("Hexadecimal = 0");
        return;
    }

    while (decimal > 0)
    {
        remainder = decimal % 16;

        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';

        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal = ");

    for (i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
}

int hexadecimalToDecimal(char hex[])
{
    int decimal = 0;
    int i = 0;
    int value;

    while (hex[i] != '\0')
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 'a' + 10;

        decimal = decimal * 16 + value;
        i++;
    }

    return decimal;
}

void decimalToOctal(int decimal)
{
    int octal[20];
    int i = 0;

    if (decimal == 0)
    {
        printf("Octal = 0");
        return;
    }

    while (decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal = ");

    for (i = i - 1; i >= 0; i--)
        printf("%d", octal[i]);
}

int main()
{
    int choice;
    int octal, decimal;
    char hex[20];

    printf("1. Octal to Hexadecimal\n");
    printf("2. Hexadecimal to Octal\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter octal number: ");
        scanf("%d", &octal);

        decimal = octalToDecimal(octal);
        decimalToHexadecimal(decimal);
    }
    else if (choice == 2)
    {
        printf("Enter hexadecimal number: ");
        scanf("%s", hex);

        decimal = hexadecimalToDecimal(hex);
        decimalToOctal(decimal);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}