#include <stdio.h>

int main() {
    int i, j;
    char ch;
    int n = 5;

    for(i = 1; i <= n; i++) {

        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Ascending characters
        for(ch = 'A'; ch <= 'A' + i - 1; ch++) {
            printf("%c", ch);
        }

        // Descending characters
        for(ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}