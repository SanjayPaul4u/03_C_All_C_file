# include<stdio.h>
void decript(char *string){
    char *ptr= string;
    while (*ptr!='\0')
    {
        *ptr=*ptr-1;
        *ptr++;
    }
    
}
int main(){
    char string[]="dpnf!up!nz!sppn";
    decript(string);
    printf("The decript value of string is: %s ", string);
    return 0;
};