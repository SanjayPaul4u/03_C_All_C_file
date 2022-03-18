# include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    // ptr =&marks[0];//SAMNE MEANING LIKE BELLOW LINE
    ptr =marks;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of sudent %d:  \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The marks of sudent %d is:  %d \n", i+1, marks[i]);
    }
    
    return 0;
};