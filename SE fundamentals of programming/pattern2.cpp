#include <stdio.h>

int main() {
    char current_char = 'A';
    int line_length = 1;

    while (current_char <= 'O') {
        for (int i = 0; i < line_length; i++) {
            printf("%c ", current_char);
            current_char++;
        }
        printf("\n");
        line_length++;
    }

    return 0;
}
