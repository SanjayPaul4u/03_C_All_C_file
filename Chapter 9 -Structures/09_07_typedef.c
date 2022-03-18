# include<stdio.h>
# include<string.h>
typedef struct employee
{
    int code;
    char name[20];
    int age;
    
}emp;

void showStructure(emp *pointer){
    printf("The name is: %d\n", (*pointer).code);
    printf("The name is: %s\n", (*pointer).name);
    printf("The name is: %d\n", (*pointer).age);
    (*pointer).age=222;// age will be happen because it is not copy
}

int main(){
    //declair e1 , *ptr
    emp e1;
    emp *ptr;

    //pointing *ptr to e1
    ptr=&e1;

    //set the number value for e1
    ptr->code=1;
    strcpy(ptr->name,"sanjay");
    ptr->age=16;

    //display by function
    showStructure(ptr);
    printf("The name is: %d\n", e1.age);




    
    return 0;
};