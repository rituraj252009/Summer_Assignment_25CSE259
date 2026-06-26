#include <stdio.h>

int palindrome(int n)
{
    int temp = n, rev = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return (temp == rev);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a Palindrome Number", num);
    else
        printf("%d is not a Palindrome Number", num);

    return 0;
}