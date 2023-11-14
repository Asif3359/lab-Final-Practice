#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue_array[MAX];
int front = -1;
int rear = -1;

void enQueue(int data)
{
    if(rear==MAX-1)
    {
        printf("Overflow");
        exit(1);
    }
    else if(rear==-1 && front==-1)
    {
        front = rear=0;
        queue_array[rear]=data;
    }
    else{
        rear++;
        queue_array[rear]=data;
    }
}

int deQueue ()
{
    int value;

    if(rear==-1 && front==-1)
    {
        printf("underflow");
        exit(1);
    }
    else if(rear==front)
    {
        value = queue_array[front];
        front = rear = -1;
    }
    else{
        value = queue_array[front];
        front++;
    }
    return value;
}

void printQueue ()
{
    int i ;

    if(front==-1 && rear==-1)
    {
        printf("underflow");
        exit(1);
    }
    else{
        for(i=front ; i<rear+1; i++)
        {
            printf("%d , ",queue_array[i]);
        }
    }
    printf("\n");
}

int main()
{
    int data ;
    enQueue(10);
    enQueue(20);
    enQueue(30);
    printQueue();

    data = deQueue();

    printQueue();


    return 0;
}
