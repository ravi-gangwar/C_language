
#include <stdio.h>
#include <string.h>

int main() {
    int size;
    scanf("%d", &size);
    char string[size + 1]; // +1 for the null-terminator
    char temp[size + 1];   // +1 for the null-terminator

    // Read the input using fgets
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; // Removing the newline character

    strcpy(temp, string);
    strrev(string);

    puts(string);

    return 0;
}
