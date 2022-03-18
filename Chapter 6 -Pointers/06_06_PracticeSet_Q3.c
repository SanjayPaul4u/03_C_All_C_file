# include<stdio.h>
void change(int *a);
int main(){
    int i =100;//I have to change this value of variable 10 times🤔
    int *j=&i;

    printf("The value of i Before calling: %d \n",i);
    change( *(&j));
    printf("The value of i After calling: %d \n",i);
    return 0;
};
void change(int *a){
    for (int m = 1; m <= 10; m++)
    {
        *a +=1;
        // printf("No. %d changing value of a variabe is : %d \n",m, *a);
    }

       
}
