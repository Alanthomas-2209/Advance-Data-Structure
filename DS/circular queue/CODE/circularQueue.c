#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int data,rear=-1,front=-1;

int fullCheck(){
	if((rear+1)%MAX == front || (front == 0 && rear == MAX-1))
	{
		return 1;
	}
	return 0;
}

void enQueue(){
	if(fullCheck())
		printf(" Overflow.....! \n");
	else
		printf("Enter the data :");
		scanf("%d",&data);
		if (front == -1){
			front = 0;
		}
    		rear = (rear + 1) % MAX;
    		queue[rear] = data;
}

void Top(){
	if(front == -1 && rear==-1){
		printf("Queue is empty...! \n");
	}
	else{
		printf("Front ->%d \n ",queue[front]);	
	}
}

void display() {
	int i;
	if (front == -1 && rear==-1)
   		printf("Queue is Empty....! \n");
	else {
    		printf("\n Items ->");
    		for (i = front; i != rear; i = (i + 1) % MAX) {
      			printf("%d ->", queue[i]);
    		}
    		printf("%d ", queue[i]);
  	}
}

void deQueue(){
	if (front == -1 && rear==-1) {
		printf("\n Queue is empty !! \n");
  	} 
  	else{
  		data = queue[front]; 
  		if(front==rear){
  			front=rear=-1;
  		}
  		else{
  			front = (front+1)%MAX;
  		}
  	}
    	printf("\n Deleted element -> %d \n", data);
}

void main(){
	int choice;
	printf("\n OPTIONS: \n1.Enqueue \n2.Display Queue\n3.Display Front\n4.Dequeue\n0.Exit\n");
	do{
		printf("\nEnter the choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1 : {
					enQueue();
					break;
				 }
			case 2 : {
					display();
					break;
				 }
			case 3 : {
					Top();
					break;
				 }
			case 4 : {
					deQueue();
					break;
				 }
			case 0 : {
					printf("\nExiting....!\n");
					break;
				 }
			default : {
					printf("\nWrong input\n");
					break;
				  }
		}
	}while(choice != 0 );
}
