# include<stdio.h>

int main(){
    int Three_D_Array[2][3][5]; //EXAMPLE 2 SCHOOLS 3 STUDENTS IN SCHOOLS 5 SUBJECTS IN EVERY STUDUENTS

    int *ptr =&Three_D_Array[0][0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                // printf("The address of Three_D_Array[%d][%d][%d] is: %u \n",i, j,k, &Three_D_Array[i][j][k] ); // we can do with out pointer
                //OR
                printf("The address of Three_D_Array[%d][%d][%d] is: %u \n",i, j,k, ptr );
                ptr++;
                

            }
            
        }
        
    }
    
    return 0;
};