# include<stdio.h>
void starPrint (int a);

int main(){
    int n;
    printf("How many star spread you want: ");
    scanf("%d",&n);

    starPrint ( n);
    
    return 0;
};


void starPrint (int a){
    for(int i=a; i>0; i--){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
}
