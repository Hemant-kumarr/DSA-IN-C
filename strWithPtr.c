#include <stdio.h>

int main() {
    char str[] = "Hello Hemant!";
    char *ptr = str; // pointer to string

    printf("Full String: %s\n", ptr);

    printf("Character by Character:\n");
    while (*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr++; // move to next character
    }

    return 0;
}
