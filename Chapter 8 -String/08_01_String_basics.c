# include<stdio.h>

int main(){
    // char s[]="sanjay paul";
    // printf("The value of s is %s\n", s);

    // char s2[10];
    // printf("Enter your name: ");
    // scanf("%s", &s2);
    // printf("%s have a nice day", s2);
    // return 0;


    char s[]={'s', 'a','n','j','o','y','\0'};
    printf("%s", &s);

    for (int i = 0; i < 7; i++)
    {
        printf("The address of s[i] is: %u \n", &s[i]);
    }
    
};