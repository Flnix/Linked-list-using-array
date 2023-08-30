#include<stdio.h>
#define Max_size 10
int queue[Max_size];
int front=-1;
int rear=-1;
void enqueue(int value)
{
        if(rear==Max_size-1)
        {
                printf("Queue is full\n");
                return;
        }
        if(front==-1)
        {
                front=0;
        }
        queue[++rear]=value;
}
int dequeue()
{
        if(front==-1||front>rear)
        {
                printf("Queue is empty\n");
                return-1;
        }
        int dequeued=queue[front++];
        return dequeued;
}
void display()
{
        if(front==-1||front>rear)
        {
                printf("Queue is empty\n");
                        return;
        }
        printf("Queue elements");
                for(int i=front;i<=rear;++i)
                {
                        printf("%d",queue[i]);
                }
        printf("/n");
}
int main()
{
        enqueue(10);
        enqueue(20);
        enqueue(30);
        display();
        int dequeued=dequeue();
        if(dequeued=-1)
        {
                printf("Dequeued element:%d\n",dequeued);
        }
        display();
        return 0;
}
