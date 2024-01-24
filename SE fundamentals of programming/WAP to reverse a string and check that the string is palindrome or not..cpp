#include <stdio.h>
#include <string.h>
void reverse_string(char *string) {
    int start = 0;
    int end = strlen(string) - 1;
    while (start < end) {
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;  }
}
int is_palindrome(char *string) {
    int start = 0;
    int end = strlen(string) - 1;
    
    while (start < end) {
        if (string[start] != string[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
      return 1; // Palindrome
}
int main() {
    char my_string[] = "madam";
    printf("Original string: %s\n", my_string);
    reverse_string(my_string);
    printf("Reversed string: %s\n", my_string);
    if (is_palindrome(my_string)) {
    printf("The string is a palindrome.\n");
    } 
	else {
        printf("The string is not a palindrome.\n");
         }
      return 0;
}

