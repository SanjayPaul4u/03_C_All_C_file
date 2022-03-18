# include<stdio.h>
#include <string.h>

int main(){
    char greet[50]="Hello ";
    char *name="Sanjay";

    strcat(greet, name);//Greet will be first
    printf("The value of greet is: %s \n", greet);
    return 0;
};