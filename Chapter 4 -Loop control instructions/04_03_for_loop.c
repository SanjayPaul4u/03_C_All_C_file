#include <stdio.h>

int main()
{

    //FOR LOOP
    int n;
    printf("Enter the value of n  : ");
    scanf("%d", &n);

    for (int i=n; i<=10; i++)
    {

        printf("The value of n is : %d \n", i);
    }



    //IMPORTANT FOR LOOP
    // for(int i=5; i ;i--){
    //     printf("The value of i is : %d \n", i);
    // }
    


    //QUICK QUIZE - DECREMENTING FOR LOOP
    // int i;
    // printf("Enter your number: ");
    // scanf("%d", &i);
    // for(i; i>=0; i--){
    //     printf("%d \n", i);
    // }


    return 0;
};