# include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("practice.txt", "r");

    int num[3];
    
    for (int i = 0; i < 3; i++)
    {
      fscanf(ptr, "%d", &num[i]);
      printf("No %d integer is: %d\n", i+1, num[i]);
    }

  //close is important
    fclose(ptr);
    
    return 0;
};