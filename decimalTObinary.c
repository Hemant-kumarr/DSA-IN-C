#include<stdio.h>
#include<stdlib.h>
# define MAX 50
int stack[MAX];
int top = -1;

int pop()
{    int y;
    if(top == -1){
    printf("Stack is Empty");
    exit(1);
    }
    y = stack[top];
    top--;
    return y;   
}
void push(int x)
{    
    if(top == MAX - 1)
    {
    printf("Stack overflow\n");
    }
    top = top + 1;
    stack[top] = x;
    return;
}
void decTObin(int x)
{
    while(x != 0)
    {
        push(x%2);
        x = x/2;
    }
}
int main()
{
    int d;
    printf("Enter a number : ");
    scanf("%d",&d);
    decTObin(d);
     printf("The binary value of  is : " );
    while(top != -1)
    {
        printf("%d" , pop());
    }
   
}