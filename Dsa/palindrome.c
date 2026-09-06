#include <stdio.h>

int reverseNumber(int n)
{
    int reverse = 0;
    int digit;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return reverse;
}

int isPalindrome(int n)
{
    int reverse = reverseNumber(n);

    if (n == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome", n);
    else
        printf("%d is not a palindrome", n);

    return 0;
}