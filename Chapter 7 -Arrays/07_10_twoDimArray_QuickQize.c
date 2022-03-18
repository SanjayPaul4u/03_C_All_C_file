# include<stdio.h>
#define studentNo 3//needed
#define subjectNo 4
void twoDim_Array(int array[studentNo][subjectNo]){

    for(int i=0; i<studentNo; i++){
        for(int j=0; j<subjectNo; j++){
            printf("Enter the no %d student's %d subject's marks:\n", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
        printf("************************************************************** \n");
    }
    //FOR PRINTING
    for(int i=0; i<studentNo; i++){
        for(int j=0; j<subjectNo; j++){
            printf("The no %d student's %d subject's marks is: %d\n", i+1, j+1, array[i][j]);
        }
        printf("************************************************************** \n");
    }
}
int main(){
    int marks[3][4];
    twoDim_Array(marks);
    return 0;
};