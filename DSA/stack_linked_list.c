//single linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;
void push()
{
    struct node *ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&temp->data);
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->next=root;
        root=temp;
    }
    printf("%d pushed into stack\n", temp->data);
}
void pop()
{
    struct node *ptr;
    if(root==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        ptr=root;
        root=root->next;
        //root=ptr; //data is not freed
    }
    printf("%d popped from stack\n", ptr->data);

}
void display()
{
    struct node *ptr;
    if(root==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        ptr=root;
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("1.push\n2.pop\n3.display\n");
        printf("enter the number:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
        }
    }
    return 0;
}
