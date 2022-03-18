# include<stdio.h>
void swap (float *a, float *b);

int main(){
    printf("Now i am doing practice from pointer chapter \n ");//😍😍😍

    // int a =100;
    // int *b =&a;
    // int **c =&b;
    // printf("The address of a is : %u \n", &a);
    // printf("The address of b is : %u \n", &b);
    // printf("The address of c is : %u \n", &c);

    // printf("The value of c is : %u\n", **(&c));
    // printf("The value of b is : %u\n", **(&b));

    float m =5, n=1;
    
    printf("Before calling the value of m and n is : %f and %f \n", m, n);
    swap (&m, &n);
    printf("After calling the value of m and n is : %f and %f \n" , m, n);



    return 0;
};

void swap (float *a, float *b){
    float temp;
    temp =*a;
    *a = *b;
    *b =temp;
}
