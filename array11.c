// 52. Find sum of two matrices. 
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrices:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
