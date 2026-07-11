#include <stdio.h>

void addStudent(int roll[], char name[][30], float marks[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }
}

void displayStudent(int roll[], char name[][30], float marks[], int n) {
    int i;

    printf("\n----- Student Records -----\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}

int main() {
    int n;
    int roll[10];
    char name[10][30];
    float marks[10];

    printf("Enter number of students: ");
    scanf("%d", &n);

    addStudent(roll, name, marks, n);

    displayStudent(roll, name, marks, n);

    return 0;
}