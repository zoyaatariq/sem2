#include <stdio.h>
int main() {
    int arr[3] = {5, 7, 2}, max = arr[0];
    for (int i = 1; i < 3; i++)
        if (arr[i] > max) max = arr[i];
    printf("Max = %d\n", max);
    return 0;
}
