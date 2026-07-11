#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp[5];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++) {
        printf("ID:%d  Name:%s  Salary:%.2f\n",
               emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}