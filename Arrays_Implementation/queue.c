#include <stdio.h>
int arr[100];
int front =0;
int rear=-1;
void enqueue()
{
    if (rear == 100 - 1)
    {
        printf("Queue Overflow!\n");
        return;
    }

    int n;
    printf("enter the number:");
    scanf("%d",&n);
    arr[++rear]=n;
}
void dequeue()
{
    if (front > rear)
    {
        printf("Queue Underflow! (No elements to dequeue)\n");
        return;
    }
    printf("%d",arr[front++]);
}
void display()
{
    if (front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int main()
{
    int n;
    while(1)
    {
        printf("1.enqueue\n2.dequeue\n3.display\n");
        printf("enter the elements:");
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
                   printf("enter a valid number");
                   break;
        }
    }
    return 0;
}

