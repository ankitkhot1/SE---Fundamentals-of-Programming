//WAP to show difference between Structure and Union.
#include<stdio.h>
#include<string.h>
// Structure
struct Person {
    char name[50];
    int age;
};

// Union
union Data {
    int num;
    float salary;
};

int main() {
    // Structure
    struct Person person;
    strcpy(person.name, "John");
    person.age = 25;
    
    printf("Structure - Name: %s, Age: %d\n", person.name, person.age);
    
    // Union
    union Data data;
    data.num = 10;
    
    printf("Union - Number: %d, Salary: %.2f\n", data.num, data.salary);
    
    return 0;
} 
