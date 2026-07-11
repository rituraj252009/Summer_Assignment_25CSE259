#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, count1[256] = {0}, count2[256] = {0};

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
        count1[(int)str1[i]]++;

    for (i = 0; str2[i] != '\0'; i++)
        count2[(int)str2[i]]++;

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Strings are not Anagrams.\n");
            return 0;
        }
    }

    printf("Strings are Anagrams.\n");

    return 0;
}