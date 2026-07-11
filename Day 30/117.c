#include <stdio.h>

int main() {
    int roll[5];
    char name[5][30];
    float marks[5];
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    printf("Roll\tName\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}