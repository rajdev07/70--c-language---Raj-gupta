#include <stdio.h>
int main(){
    float a;
    float b;
    float c;
      
    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f", &b);

    c  = a - b;

    printf("Difference = %f" , c);
}