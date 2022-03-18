# include<stdio.h>

typedef struct complex
{
    int real;
    int complex;
}complex;
void comDisplay(complex complexF){
    printf("The value of Real part is:m %d \n",complexF.real );
    printf("The value of Complex part is: %d \n",complexF.complex);
}

int main(){
    complex comNum[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d_Real number:" ,i+1);
        scanf("%d", &comNum[i].real);
        printf("Enter the value of %d_Complex number:" ,i+1);
        scanf("%d", &comNum[i].complex);
    }
    for (int j = 0; j < 5; j++)
    {
        comDisplay(comNum[j]);
    }
    
    
    return 0;
};