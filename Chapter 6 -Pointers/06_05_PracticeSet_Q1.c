# include<stdio.h>

int main(){
    int a =200;
    int *b =&a;
    printf("The address of a variable is : %u \n", &a);

    //WITHOUT VARIABLE B-------
    printf("The value of a variables is : %u \n",*(&a));

    //WITH VARIABLE B-------
    printf("The value of a variables is : %u \n",*b);



    return 0; 
};