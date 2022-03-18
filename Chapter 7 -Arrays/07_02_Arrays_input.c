# include<stdio.h>

int main(){
    //WAY OF GETTING INPUT

    // float marks[4];
    // printf("Enter the marks for 1st student:");
    // scanf("%f",&marks[0]);
    // printf("Enter the marks for 2nd student:");
    // scanf("%f",&marks[1]);
    // printf("Enter the marks for 3rd student:");
    // scanf("%f",&marks[2]);
    // printf("Enter the marks for 4th student:");
    // scanf("%f",&marks[3]);

    // printf("The marks of 1st student is: %f \n", marks[0]);
    // printf("The marks of 1st student is: %f \n", marks[1]);
    // printf("The marks of 1st student is: %f \n", marks[2]);
    // printf("The marks of 1st student is: %f \n", marks[3]);


    //QUICK QUIZE
    //DIFFERENT WAY OF GETTING INPUT

    float marks[5];

    for(int a =0; a<5; a++){
        printf("The value of Makrs %d: ",a+1);
        scanf("%f", &marks[a]);
    }
    for(int a =0; a<5; a++){
        printf("The value of Makrs %d is: %f \n",a+1, marks[a]);
    }
    return 0;
};