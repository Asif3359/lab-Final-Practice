#include <stdio.h>
#include <stdlib.h>

int factorial (int n )
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    printf("Enter a number you want to factorial :");
    int factNumber ;
    scanf("%d",&factNumber);
    printf("\nFactorial Number for : %d \n",factNumber);

    printf("\nFactorial number : %d \n",factorial(factNumber));
    return 0;
}
