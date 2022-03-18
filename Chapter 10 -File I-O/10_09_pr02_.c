#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("tabel.txt", "w");

    int num;
    printf("Enter multiplication table number: ");
    scanf("%d", &num);

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", num, i+1, num*(i+1));
        fprintf(ptr,"%d X %d = %d \n", num, i+1, num*(i+1));
    }

    printf("***** THE TABLE OF %d IS SUCCESSFULLY GENERATED TO \"table.txt\"   GO... *****",num);

    //close is important
    fclose(ptr);
    return 0;
};