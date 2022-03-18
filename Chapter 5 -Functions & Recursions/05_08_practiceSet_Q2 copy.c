# include<stdio.h>
float celToFaren (float c);


int main(){
    float celcius;
    printf("Enter the value of celcius: ");
    scanf("%f",&celcius);

    float result = celToFaren(celcius);
    printf("%f celcius to farenheight is: %f",celcius, result);
    return 0;
};
float celToFaren (float c){
    float farenheit =(c*9/5)+32;
    return farenheit;
}