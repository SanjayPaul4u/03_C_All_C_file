# include<stdio.h>

int main(){
    int a[4];

    printf("The address of a[0] is: %u \n", &a[0]);
    printf("The address of a[1] is: %u \n", &a[1]);
    printf("The address of a[2] is: %u \n", &a[2]);
    printf("The address of a[3] is: %u \n", &a[3]);

    //YOU WILL SEE THAT MEMORY WILL BE RESURVE 4 BYTE

    return 0;
};