#include <stdio.h>//7 QUESTION WILL BE LIKE THIS
#define table 3
#define tableLevel 10
void multFunction(int array[table][tableLevel])
{

    for (int j = 0; j < table; j++)
    {
        int n;
        printf("****************************************\nEnter multiplicatio %d table no: ", j+1);
        scanf("%d", &n);

        for (int i = 0; i < tableLevel; i++)
        {
            printf("%d X %d = %d \n", n, i + 1, n * (i + 1));
        }
    }
}
int main()
{
    int multable[3][10];
    multFunction(multable);
    return 0;
};