# include<stdio.h>

int main(){
    // int i = 10; 
    // do{
    //     printf("the value of i is : %d \n", i);
    //     i++;
    // }while(i<5); //here we found that this condition is not true. even this do-while loop execute at least ones.


    //QUICK QUIZE
    int user;
    printf("Enter the number : ");
    scanf("%d", &user);

    do
    {
        printf("%d \n", user);
        user++;
    } while (user<=20);
    
    return 0;
};