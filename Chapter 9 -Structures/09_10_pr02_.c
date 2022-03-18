#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} vector;
vector sumVector(vector vector1, vector vector2)
{
    vector result;
    result.x = vector1.x+vector2.x;
    result.y = vector1.y+vector2.y;
    return result;
}

int main()
{
    vector v1, v2, sum;
    v1.x = 5;
    v1.y = 22;

    v2.x = 3000;
    v2.y = 2000;

    sum =sumVector(v1,v2);
    printf("The sum of two vector is: %d and %d\n",sum.y, sum.x);
    

        return 0;
    };