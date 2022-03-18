#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("prakijocihikiktxt", "r");

    if (ptr==NULL){
        printf("This file is not exits.");
    }
    else{
        printf("Yes this file is exits.");
    }
    
  
    
    

    return 0;
};