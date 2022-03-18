# include<stdio.h>
float force(float mass);

int main(){
    float m, result;
    printf("Enter the the value of Mass in kgs: ");
    scanf("%f",&m);

    result = force(m);
    printf("The value of Force in newton is : %.2f", result);
    return 0;
};
float force(float mass){
    float force=mass*9.8;
    return force;
}