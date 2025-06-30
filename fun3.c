#include <stdio.h>
int isEven(int x) {
    return x % 2 == 0;
}
int main() {
    if (isEven(4))
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
