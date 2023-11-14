#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data ;
    struct node * link ;
} *top =NULL;

int isimpty ()
{
    if(top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push (int data)
{
    struct node *newNode ;
    newNode = malloc(sizeof(newNode));

    if(newNode==NULL)
    {
        printf("Stack Over Flow");
        exit(1);
    }
    newNode->data= data;
    newNode->link=NULL;
    newNode->link = top ;
    top=newNode;

}


int pop ()
{
    struct node * temp ;
    int value;

    if(isimpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    temp = top ;
    value = temp->data;

    top= top->link;
    free(temp);
    temp=NULL;
    return value;

}

int peek ()
{
    if(isimpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    return top->data;
}


void print()
{
    struct node * temp ;
    temp=top;
     if(isimpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    printf("The Stack Element are :");
    while(temp)
    {
        printf(" %d ,",temp->data);
        temp=temp->link;
    }
    printf("\n");
}

int main()
{
    int choice , data ;
    while(1)
    {
        printf("\n");
        printf("1. push \n");
        printf("2. pop \n");
        printf("3. print top emement \n");
        printf("4. print All element \n");
        printf("5. exit \n");
        printf("Enter Your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the element to be pushed:");
            scanf("%d",&data);
            push(data);
            break;

        case 2:
            data = pop();
            printf("Deleted element is : %d ",data);
            break;

        case 3:
            printf("Top element is : %d ",peek());
            break;

        case 4:
            print();
            break;

        case 5:
            exit(1);
            break;
        default:
            printf("Wrong Choice \n");
            break;
        }

    }
    return 0;
}
