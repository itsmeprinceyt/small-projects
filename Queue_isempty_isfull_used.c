#include <stdio.h>
#define max 50
int queue[max],front=-1,rear=-1,element; 
void enqueue();
int isempty();
int isfull();
void peek();
void dequeue();
void display();
int main()
{
    printf("Queue Program");
    int men=0;
    while(men==0)
    {
        int choice;
        printf("\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n\nEnter your input: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                men=1;
                break;
            default:
                printf("\nInvalid Input!\n");
                break;
        }
    };
}

int isempty()
{
    if(rear==-1 && front==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if(rear==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue()
{
    if(rear==max-1)
    {
        printf("\nOverflow\n");
    }
    else if(front==-1 && rear ==-1)
    {

        front=rear=0;  
        printf("Enter element to insert into the queue: ");
        scanf("%d",&element);
        queue[rear]=element;
    }
    else
    {
        printf("Enter element to insert into the queue: ");
        scanf("%d",&element);
        rear=rear+1;
        queue[rear]=element;
    }
}

void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("\nUnderflow\n");
    }
    else if(front==rear)
    {
        printf("\nElement %d has been dequeued!",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("\nElement %d has been dequeued!",queue[front]);
        front=front+1;
    }
}

void peek()
{
    if(isempty())
    {
        printf("\nNo element to peek\n");
    }
    else
    {
        printf("\n\nCurrently Peeking %d",queue[front]);
    }
}

void display()
{
    if(isempty())
    {
        printf("\n\nQueue is currently Empty!");
    }
    else
    {
        printf("\nQueue: ");
        printf("\nFront-> ");
        for(int i=front;i<=rear;i++)
        {
            printf(" %d",queue[i]);
        }
        printf(" <- Rear");
        printf("\n\n");
    }
}