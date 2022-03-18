# include<stdio.h>
# include<stdlib.h>

int main(){
    //i will solve this problem using malloc because i already create programme by using calloc🔍🔍.
    int *ptr;
    ptr = (int *) malloc(4*sizeof(int));
    free(ptr);
    for(int i = 0; i<4; i++){
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i<4; i++){
        printf("The value of %d element is: %d\n", i+1, ptr[i]);
    }
    return 0;
};