#include <stdio.h>
int main() {
    int a[5] = {2, 4, 6, 8, 10}, sum = 0;
    for (int i = 0; i < 5; i++) sum += a[i];
    printf("Average = %.2f\n", sum / 5.0);
    return 0;
}
