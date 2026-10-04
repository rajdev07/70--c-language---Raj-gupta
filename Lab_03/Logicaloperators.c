#include <stdio.h>
int main(){
    int age , ID;
  printf("My name is Raj Gupta and this is question 8");
    printf("Enter your age: " );
    scanf("%d" , &age);
    printf("Do you have an ID?(Yes = 1 , No = 0) ");
    scanf("%d", &ID);
 // &&(AND) it is a logical operator used when both arguements are true
    if (age>= 18 && ID == 1)
    {
        printf("You can enter in the auditorium\n");
    }
    if (age>=18 && ID == 0)
    {
        printf("You can not enter due to lack of ID\n ");
    }
    if (age<18)
    {
        printf("You are underage");
    }
        return 0;
}
