# include<stdio.h>
struct employee{
    char name[20];
    float salary;
    int age;
};
int main(){
    struct employee e1;
    printf("First enter first employee's data\n");
    printf("Enter name: \n");
    scanf("%s", e1.name);
    printf("Enter salary: \n");
    scanf("%f", &e1.salary);
    printf("Enter age: \n");
    scanf("%d", &e1.age);
    printf("*******************************************************\n");

    struct employee e2;
    printf("First enter second employee's data\n");
    printf("Enter name: \n");
    scanf("%s", e2.name);
    printf("Enter salary: \n");
    scanf("%f", &e2.salary);
    printf("Enter age: \n");
    scanf("%d", &e2.age);
    printf("*******************************************************\n");

    struct employee e3;
    printf("First enter third employee's data\n");
    printf("Enter name: \n");
    scanf("%s", e3.name);
    printf("Enter salary: \n");
    scanf("%f", &e3.salary);
    printf("Enter age: \n");
    scanf("%d", &e3.age);
    printf("*******************************************************\n");

    printf("The name of first employee is: %s\n", e1.name);
    printf("The salary of first employee is: %f\n", e1.salary);
    printf("The age of first employee is: %d\n", e1.age);
    printf("____________________________________________________________\n");
    printf("The name of second employee is: %s\n", e2.name);
    printf("The salary of second employee is: %f\n", e2.salary);
    printf("The age of second employee is: %d\n", e2.age);
    printf("____________________________________________________________\n");
    printf("The name of third employee is: %s\n", e3.name);
    printf("The salary of third employee is: %f\n", e3.salary);
    printf("The age of third employee is: %d\n", e3.age);
    printf("____________________________________________________________\n");


    return 0;
};