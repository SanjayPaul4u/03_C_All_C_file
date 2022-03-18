#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1;
    int *ptr2;

    ptr1 = (int *)calloc(600, sizeof(int));

    for (int i = 0; i < 600; i++)
    {
        ptr2 = (int *)calloc(6000000, sizeof(int));
        printf("Enter the value of %d element: \n", i + 1);
        scanf("%d", &ptr1[i]);
        free(ptr2);//Here is free function
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d \n", i + 1, ptr1[i]);
    }

    return 0;
};