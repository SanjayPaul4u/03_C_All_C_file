#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    char name[25];
    int salary;
};

void showStructure(struct employee *empy){

    printf("The code is: %d\n", (*empy).code);
    printf("The name is: %s\n", (*empy).name);
    printf("The name is: %d\n", (*empy).salary);
    (*empy).code=34;// code will be display after showing function because it is not copy here
}
int main()
{
    struct employee e1;
    struct employee *pointer;
    pointer = &e1;

    e1.code=1;
    strcpy(e1.name,"sanjay");
    e1.salary=19;

    showStructure(pointer);
    printf("The value of name is %d", e1.code);

    return 0;
};