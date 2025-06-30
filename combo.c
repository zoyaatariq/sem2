#include <stdio.h>
int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
            sum += arr[i];
    return sum;
}
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    printf("Sum = %d\n", sumEven(a, 5));
    return 0;
}
