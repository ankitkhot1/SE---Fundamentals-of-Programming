//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5) 
#include <stdio.h>
int main()
 {
    int num = 1234;
    int firstDigit, lastDigit, sum;
    
    lastDigit = num % 10;
    
    while (num >= 10) {
        num /= 10;
    }
    
    firstDigit = num;
    sum = firstDigit + lastDigit;
    
    printf("The summation of the first and last digit is: %d\n", sum);
    
    return 0;
}
