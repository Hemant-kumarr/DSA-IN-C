#include<stdio.h>
int S[50];
int top = -1;
int N;
void push()
{  
    int x ;
    if(top==N-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter the element : ");
        scanf("%d",&x);
        top++;
        S[top] = x;
        printf("%d is Inserted\n",x);    
    }
    return;
}
void pop()
{
    int x;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        x = S[top];
        top = top -1;
        printf("%d is deleted\n",x);
    }
    return ;
}
void display()
{
    printf("Element of stack : \n");
    for(int i = top ; i>=0 ; i--)
    {
        printf("%d\n",S[i]);
    }
    return;
}
int main()
{  
    int ch ;
    printf("Enter the size of stack : ");
    scanf("%d",&N);
    while(1)
    {
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("What you want to do : \n");
        scanf("%d",&ch);
        if(ch==1)
        {
            push();
        }
        else if(ch==2)
        {
            pop();
        }
        else if(ch==3)
        {
            display();
        }
        else if(ch==4)
        {
            break;
        }
        else
        {
            printf("Invalid input\n");
        }
        
    }
    return 0;
}