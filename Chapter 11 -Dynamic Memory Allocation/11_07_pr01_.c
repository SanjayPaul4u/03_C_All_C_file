# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptrArray;
    ptrArray = (int *)calloc(6, sizeof(int));
    free(ptrArray);
    
    for(int i = 0; i<6; i++){
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptrArray[i]);
    }
    for(int i = 0; i<6; i++){
        printf("The value of %d element is: %d\n", i+1, ptrArray[i]);
    }
    return 0;
};