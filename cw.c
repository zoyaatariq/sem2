#include<stdio.h>//Display the series (using loop):12345....n
int main(){
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        printf("%d",i);
    }
    return 0;
}