#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
	if(rear == SIZE - 1)
	{
		printf("Queue is full... Can not enqueue -: %d value\n",value);
		return ;
	}
	if(front == -1 ) 
		front = 0;
	rear++;
	queue[rear]= value;
	printf("Enqueued:%d\n",value);
}
void dequeue()
{
	if(front == -1 || front > rear)
	{
		printf("Queue is empty...\n");
		return;
	}
	printf("Dequeued:%d\n" ,queue[front]);
	front++;

	if(front >rear){
		front = rear = -1;
	
	}


}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    display();

    enqueue(60); // Should say "Queue is full"

    return 0;
}


/*
output
--------------------------------

Enqueued:10
Enqueued:20
Enqueued:30
Queue: 10 20 30 
Dequeued:10
Queue: 20 30 
Enqueued:40
Enqueued:50
Queue: 20 30 40 50 
Queue is full... Can not enqueue -: 60 value



*/