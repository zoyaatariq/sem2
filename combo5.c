#include <stdio.h>
int main() {
    int a[6] = {1, -2, 3, -4, 5, -6}, pos = 0, neg = 0;
    for (int i = 0; i < 6; i++) {
        if (a[i] > 0) pos++;
        else if (a[i] < 0) neg++;
    }
    printf("Positive: %d, Negative: %d\n", pos, neg);
    return 0;
}
