//Find the first occurence the substring in the given String
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "I like hill stations in Winter";
    char substring[] = "Winter";
    int i = 0, j = 0;
    int found = 0;

    while (str[i] != '\0') {
        j = 0;
        while (substring[j] != '\0' && str[i + j] == substring[j]) 
        {
            j++;
        }
        if (substring[j] == '\0') 
        {
            found = 1;
            printf("Substring found at index: %d\n", i);
            break;
        }
        i++;
    }

    if (!found) {
        printf("Substring not found\n");
    }
return 0;
}

