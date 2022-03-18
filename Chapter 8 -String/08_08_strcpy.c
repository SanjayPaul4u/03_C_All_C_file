# include<stdio.h>
# include<string.h>

int main(){
    char s[]="Sanjay";
    char t[50];

    strcpy(t, s);//t will be first
    
    printf("The value of t is: %s", t);
    return 0;
};