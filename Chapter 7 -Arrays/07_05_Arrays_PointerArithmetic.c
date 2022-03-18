# include<stdio.h>

int main(){

    // 📘ADDRESS INCREMENT AND DECREMENT ON INTEGER(4 BYTE)

    // int a =1200;
    // int *ptr =&a;

    // printf("The value of prtr is: %u\n", ptr);
    // ptr++;//(ptr =ptr+1;)
    // printf("The value of prtr is: %u\n", ptr);
    // printf("The value of prtr is: %u\n", ptr);
    // printf("The value of prtr is: %u\n", ptr);
    // ptr--;
    // ptr--;
    // ptr--;
    // printf("The value of prtr is: %u\n", ptr);



    // 📘ADDRESS INCREMENT AND DECREMENT ON CHARACTER(1 BYTE)

    char b = 'n';
    char *ptr =&b;
    printf("The value of ptr is: %d\n", ptr);
    printf("The value of ptr is: %d\n", ptr);
    printf("The value of ptr is: %d\n", ptr);
    ptr--;
    printf("The value of ptr is: %d\n", ptr);
    printf("The value of ptr is: %d\n", ptr);

    ptr--;//(ptr =ptr-1;)
    printf("The value of ptr is: %d\n", ptr);
    printf("The value of ptr is: %d\n", ptr);


    // 📘ADDRESS INCREMENT AND DECREMENT ON CHARACTER(1 BYTE)

        float c =12.5;
        float *ptr2=  &c;
        printf("The value of ptr is: %u\n", ptr2);
        ptr2++;
        printf("The value of ptr is: %u\n", ptr2);


    
    return 0;
};