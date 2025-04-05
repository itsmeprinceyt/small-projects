#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("\nLinked List Program\n");
    struct node
    {
        int element;
        struct node *next;
    };
    struct node  *head,*newnode,*temp;
    head=0;
    int choice,count=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter Data to insert into Linked-List: ");
        scanf("%d",&newnode->element);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\n1. Insert element\n0. Exit\n\nEnter your choice: ");
        scanf("%d",&choice); 
    }
    temp=head;
    while(temp!=0)
    {
        printf(" %d",temp->element);
        temp=temp->next;
        count++;
    }
    printf("\nCurrent Node Count: %d",count);
}