#include <stdio.h>

int main()
{
    // TARNARY OPERATORS
    //  int num;
    //  printf("Enter your number : ");
    //  scanf("%d",&num);
    //  (num>5)?printf("Your number is greter than five"):printf("Your number is not greater than five");
    //  return 0;
    // SWITCH CASE
    int rating;
    printf("Give rating number : ");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("Your rating is * ");
        break;
    case 2:
        printf("Your rating is ** ");
        break;
    case 3:
        printf("Your rating is *** ");
        break;
    case 4:
        printf("Your rating is **** ");
        break;
    case 5:
        printf("Your rating is ***** ");
        break;
    default:
        printf("Your rating is invalid.");
        break;
    }
};