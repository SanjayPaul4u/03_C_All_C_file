# include<stdio.h>
# include<math.h>

int main(){
    int side;
    printf("The side of square is : ");
    scanf("%d",&side);
    printf("The area of square is : %f", pow(side,2)); //%f because pow return double value
    return 0;
};