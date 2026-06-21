//single linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root;

void add_at_begin()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the value:");
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
}
void add_at_end()
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
        ptr=root;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
    }
}
void display()
{
    struct node *ptr;
    ptr=root;
    if(ptr==NULL)
    {
        printf("SL is empty\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}
void delete_at_begin()
{
    struct node *ptr;
    if(root==NULL)
    {
        printf("SL is empty");
    }
    else
    {
        ptr=root->next;
        root=ptr;
    }
}
void delete_at_end()
{
    struct node *ptr,*temp;
    if(root==NULL)
    {
        printf("SL is empty\n");
    }
    else
    {
        ptr=root;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
    }
}
int Count()
{
    struct node *ptr;
    int count=0;
    if(root==NULL)
    {
        printf("SL is empty\n");
    }
    else
    {
        ptr=root;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
    }
    return count;
}
void add_at_random()
{
    struct node *ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the number:");
    scanf("%d",&temp->data);
    int p;
    printf("enter the pos:");
    scanf("%d",&p);
    int value=Count();
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        ptr=root;
        if(p>value)
        {
            printf("Out of range\n");
        }
        for(int i=1;i<p;i++)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}
void delete_at_random()
{
    struct node *ptr,*temp;
    int p;
    int value=Count();
    printf("enter the pos:");
    scanf("%d",&p);
    if(root==NULL)
    {
        printf("SL is empty\n");
    }
    else
    {
        if(p>value)
        {
            printf("Out of range\n");
        }
        ptr=root;
        for(int i=0;i<p;i++)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        
    }
}
void search()
{
    struct node *ptr;
    int n;
    int flag=1;
    int count=0;
    printf("enter data to be searched");
    scanf("%d",&n);
    ptr=root;
    while(ptr!=NULL)
    {
        if(ptr->data==n)
        {
            count++;
            flag=0;
            printf("found at index %d",count);
        }
        count++;
        ptr=ptr->next;
    }
    if(flag==1)
    {
        printf("item not found\n");
    }
}
void reverse()
{
    struct node *prev=NULL;
    struct node *curr=root;
    struct node *next=NULL;
    if(root==NULL)
    {
        printf("SL is empty\n");
    }
    else
    {
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;          
        }

    }
    root=prev;
    printf("reversed successuffly\n");
}
void print_mid()
{
    struct node *ptr;
    int value=Count();
    int mid=value/2;
    if(root==NULL)
    {
        printf("SL is empty\n");
    }
    else
    {
        ptr=root;
        for(int i=1;i<mid;i++)
        {
            ptr=ptr->next;
        }
    }
    if (value % 2 == 0)
    {
        printf("Middle elements are: %d and %d\n", ptr->data, ptr->next->data);
    }
    else
    {
        printf("Middle element is: %d\n", ptr->next->data);
    }

}
void seperate_nodes()
{
    struct node *ptr=root;
    struct node*head=NULL;
    int p;
    printf("enter the position to seperate nodes");
    scanf("%d",&p);
    if(root==NULL)
    {
        printf("SL is empty\n");
    }
    else
    {
        for (int i = 1; i < p && ptr->next != NULL; i++)
        {
            ptr=ptr->next;
        }
        head=ptr->next;
        ptr->next=NULL;
        struct node *temp=root;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
        
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("1.Add_at_begin\n2.Add_at_end\n3.Delete_at_begin\n4.Delete_at_end\n5.Count\n6.Display\n7.Add_at_random\n");
        printf("8.Delete_at_random\n9.search\n10.reverse\n11.print+mid\n12.seperate two nodes\n");
        printf("enter the number:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:add_at_begin();
                   break;
            case 2:add_at_end();
                   break;
            case 3:delete_at_begin();
                  break;
            case 4:delete_at_end();
                  break;
            case 5:int ret=Count();
                  printf("%d\n",ret);
                  break;
            case 6:display();
                  break;
            case 7:add_at_random();
                  break;
            case 8:delete_at_random();
                  break;
            case 9: search();
                    break;
            case 10:
                    reverse();
                    break;
            case 11:
                    print_mid();
                    break;
            case 12:
                    seperate_nodes();
                    break;
            
            default:
                   printf("enter the value in the range");
                   break;
        }
    }
    return 0;
}

