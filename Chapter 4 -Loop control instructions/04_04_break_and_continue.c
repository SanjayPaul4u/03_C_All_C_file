# include<stdio.h>

int main(){
    //BREAK STATEMENT
    // int i=1;
    // do
    // {
    //     printf("The value of i is : %d \n", i);
    //     i++;
    //     if (i==5){
    //         break;
    //     }
    // } while (i<=10);


    //CONTINUE STATEMENT
    int skip=5, i=0;
    while (i<10)
    {
        
        i++;
        if(i!=skip){
            continue;
        }
        else{
            printf("%d \n",i);
        }
    }
    
    
    return 0;
};