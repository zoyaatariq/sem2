//41.Input a string from the user and display the same.
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads entire line including spaces

    printf("You entered: %s", str);

    return 0;
}