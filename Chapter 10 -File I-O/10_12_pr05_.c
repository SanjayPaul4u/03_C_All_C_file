# include<stdio.h>

int main(){
    FILE *ptr1;
    ptr1 = fopen("prevFile.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("prev_modified_File.txt", "w");
    int num;
    fscanf(ptr1, "%d", &num);
    printf("The value of num is: %d", num);

     fprintf(ptr2, "%d   <------ This value is modified(double) from file \" prevFile.txt\" ", num*2);


    fclose(ptr1);
    fclose(ptr2);
    return 0;
};