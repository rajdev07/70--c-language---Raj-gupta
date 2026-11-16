
#include <stdio.h>

union Employee
{
    int id;
    float salary;
};

int main()
{
    union Employee e;

    printf("My name is Raj Gupta , program 25 is solved\n");
    e.id = 101;
    printf("Employee ID = %d\n", e.id);

    e.salary = 15000.50;
    printf("Employee Salary = %.2f\n", e.salary);

    return 0;
}
