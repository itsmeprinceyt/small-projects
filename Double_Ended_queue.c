// this is an double ended queue known as dequeue in which we can remove and insert any element from both of the side of the this circular dequeue
#include <stdio.h>
#define max 5
int dequeue[max],front=-1,rear=-1,element,i;
void insert_front();
void insert_rear();
void delete_front();
void delete_rear();
void get_front();
void get_rear();
void display();
int isempty();
int isfull();
int main()
{
    int men=0;
    printf("Double Ended Queue A.K.A DeQueue: ");
    while(men==0)
    {
        int choice=0,mchoice=0;
        printf("\n\n1. Insert\n2. Remove\n3. Peek\n4. Display\n5. Exit\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("\n1. Insert Front\n2. Insert Rear\nEnter your choice: ");
                scanf("%d",&mchoice);
                if(mchoice==1)
                {
                    insert_front();
                }
                else if(mchoice==2)
                {
                    insert_rear();
                }
                else
                {
                    printf("\nEnter Valid Input");
                }
                break;
            case 2:
                printf("\n1. Delete Front\n2. Delete Rear\nEnter your choice: ");
                scanf("%d",&mchoice);
                if(mchoice==1)
                {
                    delete_front();
                }
                else if(mchoice==2)
                {
                    delete_rear();
                }
                else
                {
                    printf("\nEnter Valid Input");
                }
                break;
            case 3:
                printf("\n1. Get Front \n2. Get Rear\nEnter your choice: ");
                scanf("%d",&mchoice);
                if(mchoice==1)
                {
                    get_front();
                }
                else if(mchoice==2)
                {
                    get_rear();
                }
                else
                {
                    printf("\nEnter Valid Input");
                }
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
int isempty()
{
    if(front==-1 && rear==-1)
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
/*
explanation-> front
first we check 
1- if the dequeue is full or not by ( rear+1)%(size of dequeue)==front
2- we check if the index are at limit by checking  n-1
3- we check if the index are lying at -1 or not?
4- else part when the front isn't moving back and forth between the starting index and the n-1 index, we simply -- because we are adding an elemnt before the front
*/
void insert_front()
{
    if((rear+1)%max==front)
    /*this if condition can be replaced by the following conditoin. either of these 2 condition has to be true !
        1- front==0 && rear==(SIZE OF QUEUE)-1
        2- front==rear+1*/
    {
        printf("\nDequeue is Full!");
    }
    else if(front==0)
    {
        front=max-1;
        printf("\nEnter element to insert into the dequeue: ");
        scanf("%d",&element);
        dequeue[front]=element;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        printf("\nEnter element to insert into the dequeue: ");
        scanf("%d",&element);
        dequeue[front]=element;
    }
    else
    {
        front--;
        printf("\nEnter element to insert into the dequeue: ");
        scanf("%d",&element);
        dequeue[front]=element;
    }
}
/*
explanation-> insert rear
first we check 
1- if the dequeue is full or not by ( rear+1)%(size of dequeue)==front
2- we check if the rear is lying at 0 or not?
3- we check if the index are at limit by checking  n-1
4- else part when the rear isn't moving back and forth between the starting index and the n-1 index, we simply ++ because we are adding element after the front so we just ++ 
*/
void insert_rear()
{
    if((rear+1)%max==front)
    /*this if condition can be replaced by the following conditoin. either of these 2 condition has to be true !
        1- front==0 && rear==(SIZE OF QUEUE)-1
        2- front==rear+1*/
    {
        printf("\nDequeue is full!");
    }
    else if(rear==0)
    {
        rear=rear+1;
        printf("\nEnter element to insert into the dequeue: ");
        scanf("%d",&element);
        dequeue[rear]=element;
    }
    else if(rear==max-1)
    {
        rear=0;
        printf("\nEnter element to insert into the dequeue: ");
        scanf("%d",&element);
        dequeue[rear]=element;
    }
    else
    {
        rear++;
        printf("\nEnter element to insert into the dequeue: ");
        scanf("%d",&element);
        dequeue[rear]=element;
    }
}
/*
explanation for dequeue front
we have to keep in mind what condition and what scenarios we are going to face
1- if the dequeue is empty or not? =  front==-1 && rear==-1
2- if the dequeue's front element is pointing towards = n-1 there fore == front=0
3- if the dequeue's front element is front==rear therefore there only exist only 1 elemnt hence both rear=front=-1
4- if neither of this condition are matched then simpily ++ just like we were doing in a linear queue
*/
void delete_front()
{
    if(front==-1 && rear==-1)
    {
        printf("\nDequeue is empty!");
    }
    else if(front==max-1)
    {
        printf("\nElement %d has been dequeued",dequeue[front]);
        front=0;
    }
    else if(front==rear)
    {
        printf("\nElement %d has been dequeued",dequeue[front]);
        front=rear=-1;
    }
    else
    {
        printf("\nElement %d has been dequeued",dequeue[front]);
        front++;
    }
}
/*
explanation for dequeue rear
we have to keep in mind what condition and what scenarios we are going to face
1- if the dequeue is empty or not? =  front==-1 && rear==-1
2- if the dequeue's rear element is pointing towards = 0 there rear=n-1
3- if the dequeue's front element is front==rear therefore there only exist only 1 elemnt hence both rear=front=-1
4- if neither of this condition are matched then simpily ++ just like we were doing in a linear queue
*/
void delete_rear()
{
    if(front==-1 && rear==-1)
    {
        printf("\nDequeue is full");
    }
    else if(rear==0)
    {
        printf("\nElement %d has been dequeued",dequeue[rear]);
        rear=max-1;
    }
    else if(front==rear)
    {
        printf("\nElement %d has been dequeued",dequeue[rear]);
        front=rear=-1;
    }
    else
    {
        printf("\nElement %d has been dequeued",dequeue[rear]);
        rear--;
    }
}
void get_front()
{
    if(isempty())
    {
        printf("\nQueue is empty!");
    }
    else
    {
        printf("\nFront Value: %d",dequeue[front]);
    }
}
void get_rear()
{
    if(isempty())
    {
        printf("\nQueue is empty!");
    }
    else
    {
        printf("\nRear Value: %d",dequeue[rear]);
    }
}
void display()
{
    i=front;
    if(front==-1 && rear==-1)
    {
        printf("\nDequeue is currently empty");
    }
    else
    {
        printf("\nDequeue: \n");
        printf(" -> Front ");
        while(i!=rear)
        {
            printf(" %d",dequeue[i]);
            i=(i+1)%max;
        }
        printf(" %d", dequeue[rear]);
        printf(" <- Rear\n\n");
    }
}