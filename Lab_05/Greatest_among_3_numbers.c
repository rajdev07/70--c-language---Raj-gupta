// the program to find the greatest among four numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);
 
    printf("My name is Raj Gupta and this is question 14\n");
    if (a > b && a > c)
    {
        printf("the greatest of all is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("the greatest of all is %d", b);
    }
    else if (c > a && c > b)
    {
        printf("the greatest of all is %d", c);
    }

    return 0;
}
