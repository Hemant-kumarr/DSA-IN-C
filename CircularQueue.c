#include<stdio.h>
int Q[50];
int N;
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    if(front==(rear+1)%N)
    {
        printf("Queue is full\n");
    }
    else if(rear==-1)
    {
        printf("Enter the element : ");
        scanf("%d",&x);
        printf("%d is added in Queue\n",x);
        rear = front = 0;
        Q[rear] = x;
    }
    else
    {
        printf("Enter the element : ");
        scanf("%d",&x);
        printf("%d is added in Queue\n",x);
        rear = (rear+1)%N;
        Q[rear] = x;
    }
    return;
}
void dequeue()
{
    int x;
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else if(rear==front)
    {
        x = Q[front];
        printf("%d is deleted\n",x);
        front = rear = -1;
    }
    else 
    {
         x = Q[front];
        printf("%d is deleted\n",x);
        front++;
        
    }
    return;
}
void display()
{   
    if(rear==-1 || front==-1)
    {
        printf("Queue is empty");
        return;
    }
    if(rear>front)
    for(int i = front ; i<=rear ; i++)
    {
        printf("%d\n",Q[i]);
    }
    if(front>rear)
    {
        for(int j = front ; j<N ; j++)
        {
            printf("%d\n",Q[j]);
        }
        for(int k = 0 ; k<=rear ; k++)
        {
            printf("%d\n",Q[k]);
        }
    }
    return;
}
int main()
{   int ch;
    printf("Enter the size of Queue : ");
    scanf("%d",&N);
    
    while(1)
    {
       printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
       printf("What you want to do : ");
       scanf("%d",&ch);
       if(ch==1)
       {
        enqueue();
       }
       else if(ch==2)
       {
        dequeue();
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
        printf("Invalid Input\n");
       }
    }
    return 0;
}