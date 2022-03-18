# include<stdio.h>

int main(){
    FILE *pointer;
    pointer = fopen("sample.txt","r"); //-->r mode is for reading the file
    // pointer = fopen("sample2.txt","w"); //-->w mode is for writing the file
    return 0;
};