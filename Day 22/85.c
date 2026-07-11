#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[length] != '\0')
        length++;

    for (i = 0; i < length; i++)
        rev[i] = str[length - i - 1];

    rev[length] = '\0';

    for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("String is Palindrome.\n");
    else
        printf("String is Not Palindrome.\n");

    return 0;
}