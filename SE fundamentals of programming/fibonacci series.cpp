// WAP to print Fibonacci series up to given numbers
#include <stdio.h>

void printFibonacci(int num) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d: ", num);

    while (first <= num) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printFibonacci(num);

    return 0;
}
