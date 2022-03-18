# include<stdio.h>
# include<string.h>
struct employee{
    char name[50];
    int age;
    float salary;
};
int main(){
    struct employee e1, e2;
    

    //POINTER WITH STRUCTURE
    struct employee *pointer;
    pointer = &e1;
    //(*pointer).age=16;//or you can write "pointer->age=16;"
    pointer->age=16; 

    //strcpy((*pointer).name,"Meghna");//coma is here ok
    strcpy(pointer->name,"Meghna");
 
    //(*pointer).salary=22000;
    pointer->salary=22000;
    
    printf("The value of name is: %s\n", (*pointer).name);
    //or
    printf("The value of name is: %s\n", e1.name);

    printf("The value of age is: %d\n", (*pointer).age);
    //or
    printf("The value of age is: %d\n", e1.age);

    printf("The value of salary is: %f\n", (*pointer).salary);
    //or
    printf("The value of salary is: %f\n", e1.salary);
    
    printf("The address of name is: %u\n", &(*pointer).name);
    printf("The address of age is: %u\n", &(*pointer).age);
    printf("The address of salary is: %u\n", &(*pointer).salary);


    return 0;
};