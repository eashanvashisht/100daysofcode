//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;  // nested structure
};

int main() {
    struct Employee emp;

    // Input
    scanf("%s %d %d %d %d",
          emp.name,
          &emp.id,
          &emp.joining_date.day,
          &emp.joining_date.month,
          &emp.joining_date.year);

    // Output
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name,
           emp.id,
           emp.joining_date.day,
           emp.joining_date.month,
           emp.joining_date.year);

    return 0;
}
