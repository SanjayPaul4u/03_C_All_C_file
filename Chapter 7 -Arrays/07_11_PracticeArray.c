#include <stdio.h>
#define people 2
#define income 4

void twoD_array(int array[people][income])
{
    for (int i = 0; i < people; i++)
    {
        for (int j = 0; j < income; j++)
        {
            printf("Enter %d people's %d month income:\n",i+1, j+1 );
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < people; i++)
    {
        for (int j = 0; j < income; j++)
        {
            printf("No. %d people's %d month income is: %d\n",i+1, j+1, array[i][j]);
        }
    }
}
int main()
{
    int a[2][4];
    twoD_array(a);

    return 0;
};