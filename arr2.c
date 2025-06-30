#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30}, sum = 0;
    for (int i = 0; i < 3; i++)
        sum += arr[i];
    printf("Sum = %d\n", sum);
    return 0;
}
