#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data ;
    struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

void enQueue(int data)
{
    struct node *newNode ;
    newNode = malloc(sizeof(newNode));
    newNode->data= data;
    newNode->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}

void display ()
{
    struct node *temp;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is impty");
        exit(1);
    }
    else{
     temp=front;
     while(temp!=NULL)
     {
         printf("%d , ",temp->data);
         temp=temp->next;
     }
    }
}
void deQueue ()
{
    struct node *temp;
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is impty");
        exit(1);
    }
    else{
            printf("\nDeleted element : %d ", front->data);
        front=front->next;
        free(temp);
    }
    printf("\n");
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);

    display();

    deQueue();

    display();
    return 0;
}
