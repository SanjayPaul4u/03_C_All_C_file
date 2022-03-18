# include<stdio.h>

int main(){
    FILE *ptr;
    ptr =fopen("fgetdemo.txt", "r");
    char c;
    c = fgetc(ptr);//fgetc is for reading

    while (c!=EOF)
    {
        printf("%c",c);

        c = fgetc(ptr);
    }
    
    return 0;
};