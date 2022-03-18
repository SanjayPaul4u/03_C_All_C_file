#include <stdio.h>
#include <string.h>
typedef struct bank
{
    int accountNum;
    char customerName[20];
    int mobileNum;
    float balance;
} bank;

bank show_B_Dtail(bank c[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("The Account number of customer%d is : %d\n", i + 1, c[i].accountNum);
        printf("The Name of customer%d is : %s\n", i + 1, c[i].customerName);
        printf("The Mobile number of customer%d is : %d\n", i + 1, c[i].mobileNum);
        printf("The Balance of customer%d is : %f\n", i + 1, c[i].balance);
    }
}

int main()
{
    bank customer[5];
     

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the Account number of customer%d : \n", i + 1);
        scanf("%d", &customer[i].accountNum);
        printf("Enter the name of customer%d : \n", i + 1);
        scanf("%s", &customer[i].customerName);
        printf("Enter the Mobile number of customer%d : \n", i + 1);
        scanf("%d", &customer[i].mobileNum);
        printf("Enter the Balance of customer%d : \n", i + 1);
        scanf("%f", &customer[i].balance);

    }

    //calling function
    show_B_Dtail(customer);

    return 0;
};