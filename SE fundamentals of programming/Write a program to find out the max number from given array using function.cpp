//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include <stdio.h>

int findMaxDigit(int num) {
    int maxDigit = 0;

    while (num != 0) {
        int digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num = num / 10;
    }

    return maxDigit;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int maxDigit = findMaxDigit(num);

    printf("The maximum digit in the number is: %d", maxDigit);

    return 0;
}
 
