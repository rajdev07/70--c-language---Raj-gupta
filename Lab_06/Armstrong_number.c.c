
#include <stdio.h>

int main()
{
    int n, temp, digit, sum = 0;

    printf("My name is Raj Gupta, program 17 is solved\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if(sum == temp)
        printf("This is an Armstrong Number");
    else
        printf("This is not an Armstrong Number");

    return 0;
}
