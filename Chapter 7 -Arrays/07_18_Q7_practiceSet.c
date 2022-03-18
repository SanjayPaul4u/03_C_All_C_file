# include<stdio.h>

void multiplicationTable(int *array, int level, int n){
    for (int i = 0; i < level; i++)
    {
        printf("%d X %d =%d\n",n, i+1, n*(i+1) );
    }
    
}

int main(){
    int multable[3][10];
    multiplicationTable(multable[0], 10, 5);
    multiplicationTable(multable[1], 10, 10);
    multiplicationTable(multable[2], 10, 11 );

    return 0;
};