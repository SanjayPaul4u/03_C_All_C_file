# include<stdio.h>
void printStar (int a);
int main(){
    int n=3;
    printStar(n);

    return 0;
};
void printStar (int a){

    
    if (a==1){
        printf("*\n");
        return;
    }
    
    

    printStar(a-1);
    for (int i = 0; i < (2*a-1); i++)
    {
       printf("*");
    }
    printf("\n");
    
}
