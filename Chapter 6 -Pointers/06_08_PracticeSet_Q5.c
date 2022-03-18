# include<stdio.h>

int main(){
    int i = 455;
    int *j =&i;
    int **k =&j;
    printf("The value of j is : %d \n", **(&k));
    printf("The value of i is : %d \n", **k);//This is the Answere😎😎
    printf("The Address of j is : %u \n", &i);
    return 0;
};