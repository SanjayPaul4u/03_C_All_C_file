# include<stdio.h>
int sum(int x, int y);

int main(){
    int a=3, b=4;

    printf("Befor calling function the value of a and b is : %d and %d\n", a, b);
    printf("The sum of a and b is %d\n", sum(a, b) );
    printf("After calling function the value of a and b is : %d and %d\n",a ,b);//THE VALUE OF A AND B NOT WILL BE CHANGED.

    return 0;
};
int sum(int x, int y){
    return x+y;
}
