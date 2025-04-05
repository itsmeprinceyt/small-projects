// How normal queue works is that the first in element will be removed but here it is going in a circular way!

#include <stdio.h>
#define max 10
int queue[max],front=-1,rear=-1,element,i;
void enqueue();
void dequeue();
void peek();
void display();
int main()
{
    int men=0;
    printf("Circular Queue: ");
    while(men==0)
    {
        int choice;
        printf("\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
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
                printf("\nEnter Valid Input!");
                break;
        }
    }
}
void enqueue()
{
    if((rear+1)%max==front)
    /*
        this if condition can be replaced by the following conditoin. either of these 2 condition has to be true !
        1- front==0 && rear==(SIZE OF QUEUE)-1
        2- front==rear+1
    */         
    {
        printf("\nQueue is full!");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        printf("\nEnter element to insert into the queue: ");
        scanf("%d",&element);
        queue[rear]=element;
    }
    else
    {
        rear=(rear+1)%max;
        printf("\nEnter element to insert into the queue: ");
        scanf("%d",&element);
        queue[rear]=element;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty!");
    }
    else if(front==rear)
    {
        printf("\nElement %d has been dequeued!",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("\nElement %d has been dequeued!",queue[front]);
        front=(front+1)%max;
    }
}
void peek()
{
    if(rear==-1 && front==-1)
    {
        printf("\nNo element to peek!");
    }
    else
    {
        printf("\nCurrently Peeking %d",queue[front]);
    }
}
void display()
{
    i=front;
    if(rear==-1 && front==-1)
    {
        printf("\nQueue Is Empty!");
    }
    else
    {
        printf("\nQueue: \n");
        printf("Front ->");
        while(i!=rear)
        {
            printf(" %d",queue[i]);
            i=(i+1)%max;
        }
        printf(" %d",queue[rear]);
        printf(" <- Rear");
    }
}