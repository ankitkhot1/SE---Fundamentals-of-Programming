 //WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746.
 #include <stdio.h>

void printReverse(int num) {
    int reverse = 0;

    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    printf("Reverse of the number: %d", reverse);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printReverse(num);

    return 0;
}

