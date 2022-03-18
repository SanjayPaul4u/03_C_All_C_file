# include<stdio.h>
void likeStrcpy(char *string1, char *string2){
    //---------------->UNSOLVED🥱😫😪😪
    char *c;
    *c=*string1;
    *string2=*c;
    
}
int main(){
    char st1[]="this";
    char st2[50];
    likeStrcpy(st1, st2);
    printf("The value of st2 is: %s", st1);

    return 0;
};