# include<stdio.h>
float average(int a, int b, int c);


int main(){
    int x, y, z;
    printf("Enter your first number: \n");
    scanf("%d", &x);
    printf("Enter your second number: \n");
    scanf("%d", &y);
    printf("Enter your third number: \n");
    scanf("%d", &z);

    printf("The average of %d, %d, %d is: %f", x,y,z, average(x, y, z));


    return 0;
};

float average( int a, int b, int c){
    
    float average = (float)(a +b +c)/3;
    return average;
}