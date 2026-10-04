#include <stdio.h>
int main()
{
    int a;
    int b;
   printf("My name is Raj Gupta and this is question 9");
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    if (a == b)
    {
        printf("Both numbers are equal \n");
    }
    else
    {
        printf("Both numbers are not equal \n");
    }
    if (a > b)
    {printf("first number is greater than second number\n");}
    else{
        printf("Second number is greater than first number \n");
    }
    
    return 0;
}
