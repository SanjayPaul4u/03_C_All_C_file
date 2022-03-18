# include<stdio.h>
#include <string.h>

int main(){
    char *name="Sanjay";
    int length =strlen(name);
    printf("The length of name variable is: %d", length);// printed excluding the nul character.
    return 0;
};