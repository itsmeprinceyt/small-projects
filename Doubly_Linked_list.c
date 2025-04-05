#include <stdio.h>
#include <stdlib.h>
int choice = 1, count = 0, count2 = 0, key, c = 0;
struct node
{
    int element;
    struct node *next;
    struct node *prev;
} * head, *newnode, *temp, *temp2, *temp3;
void enter()
{
  while (choice == 1)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter element to insert into the linked list: ");
    scanf("%d", &newnode->element);
    newnode->next = 0;
    newnode->prev = 0;
    if (head == 0)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      newnode->prev=temp;
      temp = newnode;
    }
    break;
  }
}
void search()
{
  printf("\nSearching\nEnter element to search: ");
  scanf("%d", &key);
  temp2 = head;
  count = 0;
  c = 0;
  while (temp2 != 0)
  {
    count++;
    if (temp2->element == key)
    {
      c = 1;
      break;
    }
    temp2 = temp2->next;
  }
  if (c == 1)
  {
    printf("\nElement %d found at Node %d\n", key, count);
  } else {
    printf("\nElement not found\n");
  }
}
void display()
{
  count2 = 0;
  temp3 = head;
  printf("\n\nLinked List:\n");
  while (temp3 != 0)
  {
    printf("%d ", temp3->element);
    count2++;
    temp3 = temp3->next;
  }
  printf("\nCurrent Node Count: %d", count2);
}
int main() {
  head = 0;
  printf("\n\nDoubly Linked List Program\n");
  int mchoice;
  int men = 0;
  while (men == 0) {
    printf(
        "\n\n1. Insert\n2. Display\n3. Linear Search\n4. Exit\n\nEnter your choice: ");
    scanf("%d", &mchoice);
    switch (mchoice)
    {
    case 1:
      enter();
      break;
    case 2:
      display();
      break;
    case 3:
      search();
      break;
    case 4:
      men = 1;
      break;
    default:
      printf("\nEnter valid option");
      break;
    }
  }
}