# include<stdio.h>
typedef struct complex
{
    int real;
    int complex;
}complex;

int main(){
    complex c1, c2;
    c1.real=1;
    c1.complex=2;

    c2.real=3;
    c2.complex=4;

    printf("In c1 the value of real no is: %d\n",c1.real);
    printf("In c1 the value of complex no is: %d\n",c1.complex);
    printf("In c2 the value of real no is: %d\n",c2.real);
    printf("In c2 the value of complex no is: %d\n",c2.complex);
    return 0;
};