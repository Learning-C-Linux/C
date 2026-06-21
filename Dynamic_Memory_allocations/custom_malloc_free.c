//Write 2 func, one has the prototype of malloc() and other has the prototype of free().
//When first func is called , it should return the address that is align to 64. 
//Incase none of the address is aligned to 64 , what address will it give.
#include <stdio.h>
#include <stdlib.h>

void* my_malloc(int size)
{
    char *ptr=(char*)malloc(size+63);
    if(ptr==NULL)
    {
        printf("failed to alloacte\n");
    }
    char *aligned = ptr;
    while (((unsigned long)aligned % 64) != 0)
        aligned++;
    printf("Original pointer: %p\n", ptr);
    printf("Aligned pointer : %p\n", aligned);

    return aligned;
}
void my_free(void *ptr)
{
    free(ptr);
}
int main()
{
    int *p = (int*)my_malloc(10 * sizeof(int));
    if (p == NULL)
        return 1;

    for (int i = 0; i < 10; i++)
        p[i] = i + 1;

    for (int i = 0; i < 10; i++)
        printf("%d ", p[i]);
    printf("\n");

    my_free(p);
    return 0;
}
