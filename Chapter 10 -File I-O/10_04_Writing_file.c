# include<stdio.h>

int main(){
    FILE *pointer;
    pointer = fopen("Generated.txt","w");

    int num=404;
    fprintf(pointer, "The Writing Number Is: %d\n", num);
    fprintf(pointer, "Thanks for using fprintf.");


    fclose(pointer);
    
    return 0;
};