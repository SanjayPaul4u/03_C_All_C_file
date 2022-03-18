# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptrArray;
    int n;
    printf("How many integer you want for you work????::: \n");
    scanf("%d",&n);
    ptrArray = (int *)calloc(n, sizeof(int));
    free(ptrArray);
    
    for(int i = 0; i<n; i++){
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptrArray[i]);
    }
    for(int i = 0; i<n; i++){
        printf("The value of %d element is: %d\n", i+1, ptrArray[i]);
    }
    return 0;
};