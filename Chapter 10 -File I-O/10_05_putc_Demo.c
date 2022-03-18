# include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("putcDemo.txt", "w");
    putc('W', ptr);//"putc" IS WRITE AND "fputc" IS WRONG AND CORRECT THE PDF   
    putc('r', ptr);
    putc('i', ptr);
    putc('t', ptr);
    putc('i', ptr);
    putc('n', ptr);
    putc('g', ptr);
    putc('.', ptr);
    putc('.', ptr);
    putc('.', ptr);
    
    fclose(ptr);
    return 0;
};