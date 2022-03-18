# include<stdio.h>
void sumAndAverage(int a, int b, int *sum, float *average){
    *sum = a+b;
    *average = (float) (*sum)/2;

    
}

int main(){
    int a=3, b=6, sum;
    float average;

    sumAndAverage(a, b, &sum, &average);
    printf("The value of a is: %d \n", a);
    printf("The value of b is: %d \n", b);
    printf("The value of sum is: %d \n", sum);
    printf("The value of average is: %f \n", average);
    return 0;
};