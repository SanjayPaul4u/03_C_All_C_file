# include<stdio.h>

int main(){
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i]=5*(i+1);
        printf("5 X %d = %d\n", i+1, mul[i]);//I AM PRINTING MULTIPLICATION TABLE IN A SAME LOOP
    }
    
    
    

    return 0;
};