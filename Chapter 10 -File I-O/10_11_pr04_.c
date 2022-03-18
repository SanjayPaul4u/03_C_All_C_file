# include<stdio.h>
typedef struct employee
{
    char name[25];
    float salary;
} emp;

emp gettingInput_and_forDisplay(emp employee[]){

    for (int i = 0; i < 2; i++)
    {
        printf("Enter no%d employee's name\n", i+1);
        scanf("%s", &employee[i].name);
        printf("Enter no%d employee's salary \n", i+1);
        scanf("%f", &employee[i].salary);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("No%d employee's name is: %s\n", i+1, employee[i].name);
        printf("No%d employee's salary is: %f\n", i+1,employee[i].salary);
        
    }

}

int main(){
    emp e[2];


    FILE *ptr;
    ptr = fopen("pr04_.txt", "w");

    //This function is for getting input and display those input
    gettingInput_and_forDisplay(e);
    
    //This loop is for display name and salary on file 
    for (size_t i = 0; i < 2; i++)
    {
        fprintf(ptr, "The name and salary of employe %d is: %s, %f \n", i+1, e[i].name, e[i].salary);
    }
    

    fclose(ptr);
    return 0;
};