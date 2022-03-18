# include<stdio.h>

int main(){
    // int i = 100;
    // int *j = &i;


    // //  FOR KNOWING VALUE OF OPERATOR
    // printf("The value of i is : %d \n", i);
    // printf("The value of i is : %d \n", *j);
    // printf("The value of i is : %d \n",*(&i));

    // //  FOR KNOWING ADDRESS OF OPERATOR
    // printf("The ADDRESS of i is : %u \n", &i);
    // printf("The ADDRESS of i is : %u \n", j);


    // //KNOWING ADDRESS AND VALUE FOR J
    // printf("The address of j is %u \n",&j);
    // printf("The value of j is %u \n",*(&j));


    //----------------practice by me
    char character ='s';
    char *ch_r = &character;
    char **chh_rr=&ch_r;

    printf("The value of character is %c \n", *ch_r);
    printf("The address of character is %u \n", &character);
    printf("The address of character is %u \n", ch_r);


    printf("The address of ch_r is %u \n", &ch_r);
    printf("The value of ch_r is %u \n", *(&ch_r));

    printf("value of chh_rr: %u \n", **(&chh_rr ));
    printf("address of chh_rr: %u \n",&chh_rr);
    return 0;
};