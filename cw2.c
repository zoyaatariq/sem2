#include<stdio.h> //Display the series (using loop):n n-1 n-2....321
int main(){
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        printf("%d ",i);
    }
    return 0;

}