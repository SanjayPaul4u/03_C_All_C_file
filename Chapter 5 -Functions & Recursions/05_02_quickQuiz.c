# include<stdio.h>
void greetOne();
void greetTwo();
void greetThree();
void func_inside_fund();

int main(){
    char name[20];
    printf("Enter your name: ");
     scanf("%s", name);
    // scanf("%[^\n]%*c", name);


    printf("%s ", name);
    greetOne();

    printf("%s ", name);
    greetTwo();

    printf("%s ", name);
    greetThree();


    return 0;
};

void greetOne(){
    printf("GOOD MORNING ");
    func_inside_fund();//FUNCTION INSIDE THE FUNCTION---> indirectly calling 
}
void greetTwo(){
    printf("GOOD Afternoon \n");
}
void greetThree(){
    printf("GOOD Night \n");
}


void func_inside_fund(){
    printf("have a nice day\n");
}