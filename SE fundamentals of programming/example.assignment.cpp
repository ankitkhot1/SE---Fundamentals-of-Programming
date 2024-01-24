 WAP to take 10 no. Input from user and find out …
 How many Even numbers are there 
 How many odd numbers are there 
 Sum of even numbers 6. Sum of odd numbers WAP to print table up to given numbers

#include <stdio.h>

int main() {
    int num, sumEven = 0, sumOdd = 0;
    
    printf("Enter 10 numbers:\n");
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
            sumEven += num;
        } else {
            printf("%d is odd.\n", num);
            sumOdd += num;
        }
    }
    
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);
    
    printf("Enter a number to print its table: ");
    scanf("%d", &num);
    
    printf("Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
