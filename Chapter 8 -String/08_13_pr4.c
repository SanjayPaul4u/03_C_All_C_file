# include<stdio.h>
void slice(char *string, int m, int n){
    int i=0;
    while ((m+i)<=n)
    {
        string[i]=string[i+m];
        i++;
    }
    string[i]='\0';
    
}
int main(){
    char str[]="sanjay";
    slice(str,1,4);
    printf("%s", str);
    return 0;
};