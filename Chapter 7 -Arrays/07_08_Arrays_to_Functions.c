# include<stdio.h>
//first way
// void ArraysToFunction(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of income %d is: %d \n", i+1, *(ptr+i));
//     } 
// }
//second way
void ArraysToFunction(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of income %d is: %d \n", i+1, arr[i]);
    } 
    arr[3]=1;//This value will be changed in main income array as well.
}



int main(){
    int income []={12,156,65464,54,444,55555,4444,4,4};

    ArraysToFunction(income, 9);

    printf("The value of income[3] is %d \n", income[3]);

    return 0;
};