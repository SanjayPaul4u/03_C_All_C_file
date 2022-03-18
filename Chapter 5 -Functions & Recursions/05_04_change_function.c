# include<stdio.h>
int change(int a);

int main(){
    int b= 22;
    printf("The value of b is before change function: %d \n",b);
    change(b);
    printf("The value of b is after change function: %d \n",b);
    return 0;
};

int change(int a){//THIS IS MISN0MER FUNCTION
    a=77;
    return 0;
}