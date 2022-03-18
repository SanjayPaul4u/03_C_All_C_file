# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(10, sizeof(int));
    

    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d\n", i+1, 7*(i+1));
    }
    

    //for more space used "recalloc"
    ptr =realloc(ptr, 15*sizeof(int));
    printf("\nAfter reallocing...\n\n");

     for (int i = 0; i < 15; i++)
    {
        printf("7 X %d = %d\n", i+1, 7*(i+1));
    }

    //here we used free function for save storage
    free(ptr);
    return 0;
};