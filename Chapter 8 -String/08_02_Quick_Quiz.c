# include<stdio.h>

int main(){
    // char str[]="Sanjay";
    // char *ptr= str;

    // while (*ptr!='\0')
    // {
    //     printf("%c", *ptr);
    //     *ptr++;
    // }


    //ANOTHER WAY TO PRINT STRING 

    // char *ptr ="Sanjay paul";

    // printf("%s", ptr);


    char *ptr;
    scanf("%s",&ptr );
    printf("%s have a nice day", *ptr);
    
    return 0;
};