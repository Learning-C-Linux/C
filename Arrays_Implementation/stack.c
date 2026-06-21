#include <stdio.h>
int arr[100];
int top=0;
void push()
{
    if (top == 100 - 1)  // check for overflow
    {
        printf("Stack Overflow!\n");
        return;
    }
    int n;
    printf("enter the element:");
    scanf("%d",&n);
    arr[top++]=n;
    printf("%d pushed into stack\n", n);
}
void pop()
{
    if (top == 0)  // check for underflow
    {
        printf("Stack Underflow! (No elements to pop)\n");
        return;
    }
    printf("%d is popped\n", arr[top--]);
}
void display()
{
    if (top == 0)
    {
        printf("Stack is empty\n");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("1.push\n2.pop\n3.display\n");
        printf("enter the elements:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                    push();
                    break;
            case 2:
                    pop();
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

