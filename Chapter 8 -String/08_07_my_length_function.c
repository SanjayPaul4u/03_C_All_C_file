#include <stdio.h>
void length(char *string);

int main()
{
    char *name = "SanjayPaul";
    printf("The name is: %s\n", name);

    length(name);//This is my own length function💞💞💞💞💞💞

        return 0;
    };



    void length(char *string)
    {
        int len=0;
        while (*string != '\0')
        {
            
            len += 1;
            *string++;
        }
            printf("The length of string is : %d \n", len);

    }
