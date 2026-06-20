//C Program to Check Vowel or Consonant

#include <stdio.h>
int main()
{
    char a;
    printf("enter the character:");
    scanf("%c",&a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("Vowels");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}
