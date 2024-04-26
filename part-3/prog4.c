//9. WAP to show difference between Structure and Union.
#include <stdio.h>
#include <string.h>

struct employee_struct {
    int empno;
    char empname[50];
    float salary;
};

union employee_union {
    int empno;
    char empname[50];
    float salary;
};

int main() {
    struct employee_struct s1;
    union employee_union u1;

    emp_struct.empno = 101;
    strcpy(s1.empname, "John");
    s1.salary = 50000.0;

    emp_union.empno = 102;
    strcpy(u1.empname, "Smith");
    u1.salary = 60000.0;

    printf("Structure - Employee Number: %d\n", s1.empno);
    printf("Structure - Employee Name: %s\n", s1.empname);
    printf("Structure - Employee Salary: %.2f\n", s1.salary);

    printf("\nUnion - Employee Number: %d\n", u1.empno);
    printf("Union - Employee Name: %s\n", u1.empname);
    printf("Union - Employee Salary: %.2f\n", u1.salary);

    printf("\nSize of Structure: %lu bytes\n", sizeof(struct employee_struct));
    printf("Size of Union: %lu bytes\n", sizeof(union employee_union));

    return 0;
}
