# include<stdio.h>
int sum(int a, int b);

int main(){
    int d = sum(10, 110);
    printf("The sum of two number is : %d", d);
    return 0;
};
int sum(int a, int b){
    int c= a+b;
    
    return c;
}