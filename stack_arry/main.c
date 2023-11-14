#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack_array [MAX];
int top = -1;

void push(int data)
{
    if(top == MAX-1)
    {
        printf("\nStack Overflow !");
        return ;
    }
    top=top+1;
    stack_array[top]=data;
}
int pop()
{
    int value;
    if(top==-1)
    {
        printf("\nStack underflow !");
        exit(1);
    }
    value=stack_array[top];
    top=top-1;
    return value;

}

void print()
{
    int i ;
    if(top==-1)
    {
        printf("\nStack underflow !");
        return;
    }
    for(i=top ; i>-1; i--)
    {
        printf("% d , ",stack_array[i]);
    }
    printf("\n");
}

int main()
{
   int data ;
   push(10);
   push(20);
   push(30);
   push(40);

   print();

   data= pop();

   print();

    return 0;
}
