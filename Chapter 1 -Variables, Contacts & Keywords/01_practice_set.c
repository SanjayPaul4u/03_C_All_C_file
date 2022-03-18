
#include <stdio.h>

int main()
{   
    // QUESTION 1: WRITE A C PROGRAMME TO CALCULATE AREA OF A RECTANGLE?

    // a) Hard coded----

    // int length=10, breadth=3;

    // int area = length * breadth;
    // printf("The length of a Ractangle is : %d\n", length);
    // printf("The breadth of a Ractangle is : %d\n", breadth);
    // printf("The area of a Ractangle is : %d\n", area);
    
    // b) User input----

    //  int length, breadth;
    //  printf("Enter the length of a Rectangle : ");
    //  scanf("%d", &length);
    //  printf("Enter the Breadth of a Rectangle : ");
    //  scanf("%d", &breadth);

    // int area =length*breadth;
    // printf("The area of a Ractangle is : %d", area);


    // QUESTION 2: CALCULATE THE AREA OF A CIRCLE AND MODIFY THE SAME PROGRAMME TO CALCULATE THE VOLUME OF A CYLINDER GIVEN ITS RADIUS AND HEIGHT
    // int radius =3;
    // float pi =3.14;
    // printf("The area of a circle is : %f\n",pi*radius*radius);

    // int height = 5;
    // printf("The area of a Cilender is : %f",pi*radius*radius*height);


    //QUESTION 3:
    // float centigrade =37;
    // float farenheit =0;
    // float cen_to_faren =(centigrade*9)/5+32;
    // printf("\nThe value of this %f Degree celcius temperature in farenheit is : %f \n \n",centigrade, cen_to_faren);

    // float centigrade1 =0;
    // float farenheit1 =122;
    // float faren_to_cel1 =((farenheit1-32)/9)*5;
    // printf("The value of this %f Degree farenheit temperature in celsius is : %f \n \n", farenheit1, faren_to_cel1);

    // QUESTION 4:
    int principal =100, rate =5, year_or_time =1;
    int simpalInterest =(principal*rate*year_or_time)/100;
    printf("The simpal interest is : %d", simpalInterest);

    return 0;
};