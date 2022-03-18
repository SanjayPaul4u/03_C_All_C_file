# include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("sample.txt","r");
    // char letter[100];
    int num[10];
    fclose(ptr);//FIRST OPEN MEAMS COMMENT OUT "FCLOSE"🔺🔻🔺🔻🔺🔻🔺

    //int num2;

    // fscanf(ptr,"%[^\n]%*c",&letter );
    // printf("The value of letter is: %s \n",letter);//Thats all coming from sample.txt in this folder.

    for (int i = 0; i < 10; i++)
    {
    fscanf(ptr, "%d",&num[i]);
    printf("The value of num is: %d \n", num[i]);
    }
    
    // fscanf(ptr, "%d",&num2);
    // printf("The value of num is: %d \n", num2);
    return 0;
};