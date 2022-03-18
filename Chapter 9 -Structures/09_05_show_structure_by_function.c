#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    char name[25];
    int salary;
};

void showStructure(struct employee empy){
    printf("The code is: %d\n", empy.code);
    printf("The name is: %s\n", empy.name);
    printf("The name is: %d\n", empy.salary);
    empy.code=34;// code not will be display because it is copy only
}
int main()
{
    struct employee e1;
    struct employee *pointer;
    pointer = &e1;

    pointer->code=1;
    strcpy(pointer->name,"sanjay");
    pointer->salary=19;

    showStructure(e1);
    printf("The value of name is %d", e1.code);

    return 0;
};