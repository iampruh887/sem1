#include <stdio.h>

void removeSpaces(char *str) {
    char *src = str, *dst = str;

    while (*src != '\0') {
        if (*src != ' ') {
            *dst = *src;
            dst++;
        }
        src++;
    }

    *dst = '\0'; // Add null terminator to the end
}

int main() {
    char myString[100];

    printf("Enter a string with spaces: ");
    scanf("%[^\n]s", myString);

    removeSpaces(myString);

    printf("String without spaces: %s\n", myString);

    return 0;
}
