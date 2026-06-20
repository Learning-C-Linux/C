//Write a program to increment a pointer and print its value.
#include <stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d ",size);
    int *ptr=arr;
    printf("%d ",*ptr); //prints value and then increments
    printf("%d ",*ptr++); //prints value and then increments
    printf("%d ", (*ptr)++);//prints value and then increments
    printf("%d ",*++ptr);//ptr→next, prints next value
    printf("%d",++*ptr);//prints value and then increments
    return 0;
}
