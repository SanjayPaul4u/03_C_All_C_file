# include<stdio.h>
void positiveCounter(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        if(array[i]>=0){
            printf("Print only positive array: %d \n", array[i]);
        }

    }
    
}
int main(){
    int num[]={22,-1,55,-5,-555,6666,-222,0,0,-0,222};
    positiveCounter(num, 11);
    return 0;
};