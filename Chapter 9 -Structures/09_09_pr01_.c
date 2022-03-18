#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x=4l;
    v1.y=77;
    printf("The value of x  is: %d and the value of y is: %d in vector1\n",v1.x, v1.y);
    v2.x=5555;
    v2.y=70007;
    printf("The value of x  is: %d and the value of y is: %d in vector2\n",v2.x, v2.y);


        return 0;
};