#include <stdio.h>
#include <stdlib.h>

int prev1= 0 ;
int prev2= 1 ;

void fibonacci(int n)
{
    if(n<3)
    {
        return;
    }
    int fn = prev1+prev2;
    prev1 = prev2;
    prev2=fn;
    printf(" %d ," ,fn);
    return fibonacci(n-1);
}

void printFibo(int number)
{
    if(number<1){
        printf(" invalid number ");
        return;
    }
    else if(number ==1)
    {
        printf(" %d ",0);
        return;
    }
    else if(number ==2)
    {
        printf(" %d , %d ",0,1);
        return;
    }
    else{
        printf(" %d , %d ,",0,1);
        fibonacci(number);

    }

    return;
}

int main()
{
    printf("Enter a Number :");
    int fibNumber ;
    scanf("%d",&fibNumber);
    printf("Fibonacci  for number :%d \n",fibNumber);
    printFibo(fibNumber);
    return 0;
}
