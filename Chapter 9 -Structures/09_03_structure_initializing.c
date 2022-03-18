#include <stdio.h>
struct employee
{
    char name[10];
    float salary;
    int age;
};
int main()
{
    struct employee facebook = {"sanjay", 10.500, 25};
    printf("The value of name is: %s \n", facebook.name);
    printf("The value of salary is: %f \n", facebook.salary);
    printf("The value of age is: %d \n", facebook.age);
    return 0;
};