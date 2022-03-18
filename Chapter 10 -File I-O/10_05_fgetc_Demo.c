# include<stdio.h>

int main(){
    FILE *ptr;
    ptr =fopen("fgetdemo.txt", "r");

    char c = fgetc(ptr);//fgetc is for reading file
    printf("The value of c is %c\n",c);
    // printf("The value of char is %c\n",fgetc(ptr));
    // printf("The value of char is %c\n",fgetc(ptr));
    // printf("The value of char is %c\n",fgetc(ptr));
    // printf("The value of char is %c\n",fgetc(ptr));
    // printf("The value of char is %c\n",fgetc(ptr));
    fclose(ptr);
    return 0;
};