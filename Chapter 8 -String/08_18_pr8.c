# include<stdio.h>
int occurence(char string[], char c){
    char *ptr =string;
    int count=0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
        }
       *ptr++; 
    }
    return count;
    
}
int main(){
    char st[]="harrySirr";
    int count =occurence(st, 'r');
    printf("The occurence is: %d", count);//OCCURENCES MEANS HOW SELECTED CHARACTER YOU HAVE
    return 0;
};