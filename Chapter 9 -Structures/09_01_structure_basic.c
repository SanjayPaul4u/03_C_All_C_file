# include<stdio.h>
# include<string.h>
struct employee{
   char name[10];
   float salary;
    int age;
};


int main(){
    struct employee e1;
    strcpy(e1.name,"sanjay");
    e1.salary =1000.50;
    e1.age=45;
    
    
    printf("The value of salary is: %s\n", e1.name);
    printf("The value of salary is: %f\n", e1.salary);
    printf("The value of salary is: %d\n", e1.age);
    return 0;
};