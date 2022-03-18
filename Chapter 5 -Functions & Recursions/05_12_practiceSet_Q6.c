# include<stdio.h>
int sum (int nn);

int main(){
    int n=10,resultsum; 
    resultsum = sum (n);
    printf("The sum of first %d number is : %d",n, resultsum);
    
    return 0;
};
int sum (int nn){
    printf("Sum fuction calling (%d)\n",nn);
    if (nn==0){
        return 0;
    }
    else{
        return nn + sum(nn-1);
    }
    

}