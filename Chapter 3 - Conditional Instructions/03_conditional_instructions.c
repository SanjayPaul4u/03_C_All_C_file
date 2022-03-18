#include <stdio.h>

int main()
{
    // int a;
    // char y ='Y';
    // char n ='N';

    // printf("Enter your age : ");
    // scanf("%d",&a);
    // if (a>=18)
    // {
    //     printf("%c You can drive car", y);
    // }
    // else{
    //     printf("%c You can not drive car", n);
    // }

    // SWITCH CASE
     
    //  char name[25];
    //  int marks;
    //  printf("Enter your name : ");
    //  scanf("%s", &name);
    //  printf("Enter your Marks : ");
    //  scanf("%d", &marks);

    // switch (marks)
    // {
    // case 90:
    //     printf(" %s you are pass", name);

    //     break;
    // case 100:
    //     printf("%s you are excellent", name);

    //     break;

    // default:
    //     printf("%s you are fail", name);
    //     break;
    // }

   int age;
   int vipPass =0;
   printf("Enter your age : ");
   scanf("%d", &age);
   printf("Enter your vipPass : ");
   scanf("%d", &vipPass);
   if((age>=18 && age<=70) || vipPass ==1){
      printf("You are avobe 18 and bellow 70, so you can drive.");
   }
   else{
       printf("You cannot drive.");
   }
    return 0;
};