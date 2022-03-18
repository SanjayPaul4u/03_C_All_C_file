# include<stdio.h>

int main(){
    int s[3]={100,555,324};
    int *ptr= s;

    printf("The value of thrird element s is: %d\n", *(ptr+3) );//FALSE
    printf("The value of thrird element s is: %d\n", *(ptr+2) );//THIS IS WRITE AND THIS IS TRUE.


    
    

    return 0;
};