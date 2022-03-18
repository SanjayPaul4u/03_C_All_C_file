# include<stdio.h>

int main(){
    //INITIALIZATION
    // float a[]={4.5, 5.6, 25.2, 7.3};
    // printf("The value of a[0] is: %.2f \n", a[0]);
    // printf("The value of a[1] is: %.2f \n", a[1]);
    // printf("The value of a[2] is: %f \n", a[2]);
    // printf("The value of a[3] is: %.2f \n", a[3]);

    
    char name[10];
    printf("Enter the name: ");
    scanf("%[^\n]%*c", &name);
    printf("Your name is : %s", name);
    return 0;
};