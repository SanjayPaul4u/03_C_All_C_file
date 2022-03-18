#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sanjay.txt", "r");
    int num;
    int num2;
    fclose(ptr);
    if (ptr == NULL)
    {
        printf("\n\n\nThis file is not exits.\n\n\n\n\n");
    }
    else
    {
        printf("Yes, this file is exits, do work, happy hacking...\n");
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        printf("The value of num is: %d \n", num);
        printf("The value of num is: %d \n", num2);
    }

    return 0;
};