# include<stdio.h>

void length(char *str){
    int lenCount=0;
    while (*str!='\0')
    {
        lenCount+=1;
        *str++;
    }
    printf("The length of string is: %d", lenCount);
    
}

int main(){
    
    char *str;
    printf("Enter the Any string:");
    gets(str);
    puts(str);

    length(str);
    return 0;
};