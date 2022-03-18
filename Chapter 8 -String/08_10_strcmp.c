# include<stdio.h>
# include<string.h>

int main(){
    char s1[20]="hel";
    char *s2="helo";

    int value=strcmp(s1, s2);
    printf("The strcmp value is %d", value);


    return 0;
};