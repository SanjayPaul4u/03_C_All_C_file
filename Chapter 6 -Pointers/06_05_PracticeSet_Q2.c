# include<stdio.h>
void check (int a);

int main(){
    int i =655;
    printf("The address of i variable is : %u \n", &i);


    //For cheking address of a variabe is same or not in functions.
    check (i);
    //Answere is NOT SAME 😌

    return 0;
};
void check (int a){
    printf("The address of i variabe is in function : %u",&a);
}
