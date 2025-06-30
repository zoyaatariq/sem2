#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    for (int i = 2; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}
