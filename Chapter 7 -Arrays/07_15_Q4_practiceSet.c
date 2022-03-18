# include<stdio.h>

int main(){
    int multiplicationTable[10];
    int n;
    printf("Enter the table number: \n");
    scanf("%d", &n);  

    for (int i = 0; i < 10; i++)
    {
        multiplicationTable[i] = n*(i+1);
        printf("%d X %d = %d \n",n, i+1, multiplicationTable[i]);
    }
    
    return 0;
};