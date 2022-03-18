# include<stdio.h>
void encript(char *c){
    char *ptr= c;
    while (*ptr!='\0')
    {
        *ptr=*ptr+1;
        *ptr++;
    }
    

}
int main(){
    char string[]="come to my room";
    encript(string);
    printf("The encripted string is: %s", string);
    return 0;
};