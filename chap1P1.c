#include <stdio.h>

int main(){
    int length, breadth;
    printf("Enter the length\n");
    scanf("%d", &length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    
    printf("The area of this rectangle is %d", length*breadth);
    return 0;
}
