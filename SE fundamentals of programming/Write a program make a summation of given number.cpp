// Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>

int main() {
    int num = 1523;
    int sum = 0;
    
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    printf("The summation of the given number is: %d\n", sum);
    
    return 0;
}
