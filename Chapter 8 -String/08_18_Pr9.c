# include<stdio.h>
int presentOrNot(char st[], char c){
    char *ptr= st;
    int count=0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count=1;
        }
        *ptr++;
    }
    if (count==1)
    {
        printf("Yes, this \"%c\" character is present in that string\n", c);
    }
    else
    {
        printf("No, this \"%c\" character is not present.\n", c);
    }
    return count;
}
int main(){
    char string[]="sanjayPaul";
    int count=presentOrNot(string, 'b');
    // printf("The value of count is:%d", count);
    return 0;
};