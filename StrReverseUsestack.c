#include<stdio.h>
#include<string.h>
int top = -1;
char S[50];
int main()
{
    char str[50];
    printf("Enter a string : ");
    gets(str);
    int i = 0;
    while(str[i] != '\0')
    {   
         top++;
         S[top] = str[i];
         i++;
    }
    while(top>=0)
    {  
          printf("%c",S[top]);
         top--;
    }
 return 0;
} 