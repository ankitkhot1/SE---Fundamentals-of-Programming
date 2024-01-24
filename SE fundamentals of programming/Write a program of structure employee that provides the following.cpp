#include <stdio.h>
#include<string.h>
    struct employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void display_employee(struct employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct employee emp1;
    
    emp1.empno = 12345;
    strcpy(emp1.empname, "John Doe");
    strcpy(emp1.address, "123 Main Street, City");
    emp1.age = 30;
    
    display_employee(emp1);
    
    return 0;
}
