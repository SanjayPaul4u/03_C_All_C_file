#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[25];
    int age;
    float marks;
}std;

void showStructure(std *pointer)
{
    for (int i = 0; i < 1; i++)
    {
        printf("The name of student%d is:%s\n",i+1, (*pointer).name);
        printf("The name of student%d is:%d\n",i+1, (*pointer).age);
        printf("The name of student%d is:%f\n",i+1, (*pointer).marks);
        strcpy(pointer->name,"Rahul");
        pointer->age=44;
    }
    
};


int main()
{
    std s1;
    std *ptr;
    ptr = &s1;

    strcpy(ptr->name,"sanjay");
    ptr->age=14;
    ptr->marks=80;

    showStructure(ptr);
    printf("The value of age is after callig func tion: %d\n", s1.age);
    printf("The value of name is after callig func tion: %s\n", s1.name);
    return 0;
};