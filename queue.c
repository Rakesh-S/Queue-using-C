#include<stdio.h>

int size = 5;
int front = -1;
int rear = -1;
 int Queue[5];

int isEmpty()
{
	if(front == -1 && rear == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull()
{
	if(front == 0 && rear == size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int enQueue(int data)
{
	if(isFull())
	{
		printf("Queue is full, adding %d failed\n",data);
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		rear++;
		Queue[rear] = data;
		printf("%d added in %d position\n",data,rear);
	}
}
int deQueue()
{
	int data;
	if(isEmpty())
	{
		printf("Empty queue\n");
	}
	else
	{
		printf("removed %d from %d position\n",Queue[front],front);
		front++;
		if(front > rear)
		{
			front = rear = -1;
		}
	}
}

int main()
{
	deQueue();
	deQueue();
	enQueue(20);
	enQueue(21);
	enQueue(22);
	enQueue(23);
	enQueue(24);
	enQueue(25);
	enQueue(26);
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
return 0;
}
