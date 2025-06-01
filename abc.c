//implicit type conversions 

#include<stdio.h>
int main(){
    int var1 = 16;
    char var2 = 'A';
    var1 = var1 + var2;
    float var3 = var1 + 10;
    printf("var1 = %d,var3 = %.3f",var1 , var3);

    return 0;
}