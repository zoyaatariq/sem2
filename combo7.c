#include <stdio.h>
int isSorted(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        if (arr[i] > arr[i+1]) return 0;
    return 1;
}
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    if (isSorted(a, 5)) printf("Sorted\n");
    else printf("Not sorted\n");
    return 0;
}
