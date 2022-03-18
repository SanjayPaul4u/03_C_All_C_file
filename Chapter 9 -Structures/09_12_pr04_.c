# include<stdio.h>
# include<string.h>
typedef struct boys
{
    char name[25];
    int age;
}boys;

int main(){
    boys b1;
    boys *ptr;
    ptr=&b1;

    //(*ptr).age=20;//this is also right instead of this we willbe use arrow operator for fast coding.
    ptr->age=20;//This is the use of arrow operator
    strcpy(ptr->name,"sanjay");//This is the use of arrow operator 

    printf("The name of b1 is: %s\n", b1.name);
    printf("The age of b1 is: %d\n", b1.age);
    
    return 0;
};