#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    //free(ptr);//BEFORE REALLOC DON'T USE FREE FUNCTION.📌📌📌
    // CAPABLE OF STORING 5 INTEGERS
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element: \n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is: %d\n", i + 1, ptr[i]);
    }

    // USE realloc FOR STORE 10 INTEGERS
    ptr = realloc(ptr, 10 * sizeof(int));

    // ptr= realloc(ptr, 10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is: %d\n", i+1, ptr[i]);
    }
    return 0;
};