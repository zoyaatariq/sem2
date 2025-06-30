#include <stdio.h>
int main() {
    int a[4] = {4, 2, 9, 1}, min = a[0];
    for (int i = 1; i < 4; i++)
        if (a[i] < min) min = a[i];
    printf("Min = %d\n", min);
    return 0;
}
