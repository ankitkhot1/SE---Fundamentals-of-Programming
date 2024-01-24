#include <stdio.h>
int find_length(char *string) 
{
    int count = 0;
    while (*string != '\0') {
        count++;
        string++;
    }
    return count;
}
int main() {
    char my_string[] = "Hello, world!";
    int length = find_length(my_string);
    printf("Length of the string: %d\n", length);
    return 0;
}
