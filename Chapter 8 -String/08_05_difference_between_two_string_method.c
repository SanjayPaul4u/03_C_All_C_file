# include<stdio.h>

int main(){
    char *name ="Sanjay";//In this case bellow line is right.
    //  char name[]="Sanjay" ;//In this case bellow line wrong
     name= "Ricky";
     printf("Name is %s", name);
    return 0;
};