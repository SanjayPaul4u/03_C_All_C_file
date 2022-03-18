# include<stdio.h>

int main(){
    char name[25];
    printf("Enter your name : "); 
    scanf("%[^\n]%*c", name); //----OR----->scanf("%[^\n]c", name); 
    printf("%s have a nice day", name);
    return 0;
};