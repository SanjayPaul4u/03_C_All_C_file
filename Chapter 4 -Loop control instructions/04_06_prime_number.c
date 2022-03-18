# include<stdio.h>

int main(){
    // QUESTION NO 10------> prime number using while loop
    int prime = 1, i = 2, n = 1001
    ;
    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n);

    if (prime == 0)
    {
        printf("this is not a prime number");
    }
    else
    {
        printf("Yes! prime number");
    }
    return 0;
};