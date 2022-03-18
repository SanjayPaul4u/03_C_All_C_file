# include<stdio.h>

int main(){
    int a = 10;
    int *ptr1=&a;
    printf("The value of this ptr 1 is: %u\n", ptr1);
    // ptr1++;//ADDITION
    // printf("The value of this ptr 1 is: %u\n", ptr1);

    // ptr1--;//SUBTRACTION
    // printf("The value of this ptr 1 is: %u\n", ptr1);



    int b = 10;
    int *ptr2=&b;
    printf("The value of this ptr 2 is: %u\n", ptr2);

    // ptr2++;//ADDITION
    // printf("The value of this ptr 2 is: %u\n", ptr2);

    // ptr2--;//SUBTRACTION
    // printf("The value of this ptr 2 is: %u\n", ptr2);


    //SUBTRACTION OF ONE POINTER FROM ANOTHER
    int c,d, subtraction;
    c=ptr1;
    d =ptr2;
    subtraction=c-d;
    printf("The value of subtraction of a one pointer from another is: %d\n", subtraction);
    //COMPARASION OF TWO POINTER
    if (ptr1==ptr2){
        printf("The value of ptr1 and ptr2 is same.\n");
    }
    else{
        printf("The value of ptr1 and ptr2 is not same.\n");
    }
    


    return 0;
};