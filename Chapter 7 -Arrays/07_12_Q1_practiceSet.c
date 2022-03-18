# include<stdio.h>

int main(){
    int array[10];
    int *ptr= array; //int *ptr=&array[0];
    ptr =ptr+2;
    if (ptr==&array[2])
    {
        printf("The address of ptr and array is in same location.\n");
    }
    else
    {
        printf("The address of ptr and array is not in same location.\n");

    }
    
    // printf("The value of ptr is %u \n", ptr);
    // printf("The value of ptr is %u \n", &array[2]);
    return 0;
};