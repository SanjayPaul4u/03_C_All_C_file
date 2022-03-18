#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("pr03_1.txt", "r"); // FIRST READ AND THEN WRITE
    ptr2 = fopen("pr03_2.txt", "w"); // FIRST READ AND THEN WRITE

    //FOR GET TO 1ST FILE
    char text[100];
    fscanf(ptr1, "%[^\n]%*c", &text);
    printf("%s\n",text);

    //FOR PRINTED TO 2ND FILE 
    for (int i = 0; i < 2; i++)
    {
        fprintf(ptr2, "%s \n", text);
    }
    
    

    //THIS IS FROM VIDEO
    // c = fgetc(ptr1);
    // // for priting text 2nd file
    // while (c != EOF)
    // {
        
    //     putc(c, ptr2);
    //     c = fgetc(ptr1);
    // }
    

    printf("*** Content Is Successfully Transfered from \"pr03_1.txt\" to \"pr03_1.txt\" twice. ***\n\n\n\n");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
};