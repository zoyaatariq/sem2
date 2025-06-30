#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 4, 5, 6}, count = 0;
    for (int i = 0; i < 5; i++)
        if (arr[i] % 2 == 0) count++;
    printf("Even count = %d\n", count);
    return 0;
}
