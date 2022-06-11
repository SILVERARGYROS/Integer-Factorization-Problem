#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i;              // loop variable
    int n;              // input
    int remaining;      // helping variable  
    int primeInput;     // check for prime number input

    //clears screen
    #ifdef __unix__  
    {
        system("clear");
    }
    #elif defined(_WIN32) || defined(WIN32)
    {
        system("cls");
    }
    #endif

    //receiving input
    printf("Please enter a composite positive number\n");
    scanf("%d", &n);


    //initializations
    remaining = n;
    primeInput = 1;

    printf("debug n == %d\n", n);
    //looking for factors
    for(i = 2; i < remaining; i++)
    {
        // printf("debug i == %d\n", i);
        if(remaining % i == 0)
        {
            if(primeInput)
            {
                primeInput = 0;
                printf("%d == ", n);
            }

            remaining = remaining / i;
            printf("%d * ", i);
            i = 1;
            // printf("debug found dividor so i == %d\n", i);
        }
    }

    if(primeInput)
    {
        printf("The number you gave is prime\n");
    }
    else
    {
        printf("%d\n", remaining);
    }

    return 0;
}