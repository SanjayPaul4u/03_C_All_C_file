# include<stdio.h>

int main(){

    //QUESTION NO.1
    // int a =12;//In this line we found wrong
    // if(a=11){
    //     printf("I am Eleven");
    // }
    // else{
    //     printf("I am not Eleven");
    // }


    //QUESTION NO.2
    // int mathM, lifeS, phisycalS;
    // printf("Enter your mathMetic's marks : ");
    // scanf("%d", &mathM);
    // printf("Enter your life science's marks : ");
    // scanf("%d", &lifeS);
    // printf("Enter your physical science's marks : ");
    // scanf("%d", &phisycalS);

    // int totalMarks = mathM+lifeS+ phisycalS;
    // int averageOfMarks =totalMarks/3;

    // if ((averageOfMarks>=40) && (mathM>=33 && lifeS>=33 && phisycalS>=33)){
    //     printf("You are Pass. Hurray!\n");
    // }
    // else{
    //     printf("You are fail. Try again!\n");
    // }




    //QUESTION NO.3
    // float tax= 0, income;
    // printf("Enter your income : ");
    // scanf("%f", &income);

    // if (income>=250000 && income<=500000){
    //     tax = tax+ 0.05*(income-250000);
    // }
    // if (income>500000 && income<=1000000){
    //     tax = tax+ 0.20*(income-500000);
    // }
    // if (income>1000000){
    //     tax = tax+ 0.30*(income-1000000);
    // }
    // printf("The tax is %f", tax);
    


    // QUESTION NO.4
    // int year;
    // printf("Enter year : ");
    // scanf("%d", &year);
    // if ((year%100==0 && year%400==0) || (year%4==0 && year%100 !=0)){
    //     printf("This year is leapyear");

    // }
    // else{
    //     printf("This year is not leap year");
    // }



    // QUESTION NO. 5

    //ASCII VALUE
    //65 to 90 =A to Z---->capital letter
    //97 to 122 =a to z----->small letter
    char character;
    printf("Enter your character :");
    scanf("%c", &character);
    if (character<=90 && character>=65){
        printf("Your character is uppercase");
    }
    else if (character<=122 && character>=97){
        printf("Your character is lowercase");
    }
    else{
        printf("Your character is not lowercase and not uppercase");
    }




    //  QUESTION NO. 6
    // int num1, num2, num3, num4;
    // printf("Enter your first number : \n");
    // scanf("%d", &num1);
    // printf("Enter your second number : \n");
    // scanf("%d", &num2);
    // printf("Enter your third number : \n");
    // scanf("%d", &num3);
    // printf("Enter your forth number : \n");
    // scanf("%d", &num4);

    // if (num1>=num2 && num1>=num3 && num1>=num4){
    //     printf("Your greatest number is : %d", num1);
    // }
    // else if (num2>=num1 && num2>=num3 && num2>=num4){
    //     printf("Your greatest number is : %d", num2);
    // }
    // else if (num3>=num2 && num3>=num1 && num3>=num4){
    //     printf("Your greatest number is : %d", num3);
    // }
    // else{
    //     printf("Your greatest number is : %d", num4);
    // }

    return 0;
};