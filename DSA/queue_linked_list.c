//single linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;
void enqueue()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&temp->data);
    temp->next = NULL;  
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        ptr=root;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    printf("%d queue successfully\n",temp->data);
}
void dequeue()
{
    struct node *ptr;
    if(root==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        ptr=root;
        root = root->next;  // Move front to next node
        free(ptr);   
    }
    printf("%d is dequeued successfully\n",root->data);
}
void display()
{
    struct node *ptr;
    if(root==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        ptr=root;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("1.enqueue\n2.dequeue\n3.display\n");
        printf("enter the number:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                    enqueue();
                    break;
            case 2:
                    dequeue();
                    break;
            case 3:
                    display();
                    break;
            default:
                    printf("enter a valid range\n");
                    break;
        }
    }
    return 0;
}
