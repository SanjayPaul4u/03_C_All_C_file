# include<stdio.h>
// void swap (int *a, int *b);

//PRACTICE BY ME
void swap (char *a, char *b);

int main(){
    // int x=7, y=9;
    // printf("Before call The value of a and b is %d and %d \n",x, y );
    // swap (&x, &y);
    // printf("After call The value of a and b is %d and %d \n", x ,y);

    char m='M', s='S';
    printf("Before calling function The value of m and s is %c and %c \n",m, s );
    swap (&m, &s);

    printf("After calling function The value of m and s is %c and %c \n",m, s );




    return 0;
};
// void swap (int * a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b =temp;
// }

void swap (char *a, char *b){
    char temp;
    temp =*a;
    *a= *b;
    *b=temp;
}
