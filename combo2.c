#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    if (isPrime(7)) printf("Prime\n");
    else printf("Not prime\n");
    return 0;
}
