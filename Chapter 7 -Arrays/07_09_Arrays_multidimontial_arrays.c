# include<stdio.h>

int main(){
    int n_student =3;
    int n_subject =4;

    int marks[3][4];


    for(int i=0; i<n_student; i++){
        for(int j=0; j<n_subject; j++){
            printf("Enter the no %d student's %d subject's marks:\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
        printf("************************************************************** \n");
    }
    //FOR PRINTING
    for(int i=0; i<n_student; i++){
        for(int j=0; j<n_subject; j++){
            printf("The no %d student's %d subject's marks is: %d\n", i+1, j+1,marks[i][j]);
        }
        printf("************************************************************** \n");
    }

    return 0;
};