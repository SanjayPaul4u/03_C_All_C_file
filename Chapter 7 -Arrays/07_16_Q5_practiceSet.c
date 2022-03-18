# include<stdio.h>
void reverse (int *array, int n){
    
    for (int i = 0; i < n/2; i++)//   (n/2) is so important
    {
        int temp;
        // array[i], array[n-i-1]
        temp = array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
    
}
int main(){
    int number[]={1,2,3,4,5,6,7, 8, 9, 10};
    reverse (number, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("No %d element is: %d\n", i+1, number[i]);
    }
    
    return 0;
};