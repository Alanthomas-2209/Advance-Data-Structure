#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int rear=-1,front=-1;
void enQueue(int item){
	if((front == 0 && rear == MAX-1) || (front == rear+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	if (front == -1)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		if(rear == MAX-1)
			rear = 0;
		else
			rear = rear+1;
	}
	queue[rear] = item;
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
	int front_pos = front,rear_pos = rear;
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
		while(front_pos <= rear_pos)
		{
			printf("%d ",queue[front_pos]);
			front_pos++;
		}
	else
	{
		while(front_pos <= MAX-1)
		{
			printf("%d ",queue[front_pos]);
			front_pos++;
		}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{
			printf("%d ",queue[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}

void deQueue(){
	if (front == -1)
	{
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element deleted from queue is : %d\n",queue[front]);
	if(front == rear)
	{
		front = -1;
		rear=-1;
	}
	else
	{	
		if(front == MAX-1)
			front = 0;
		else
			front = front+1;
	}
}

void main(){
	int choice,data;
	printf("\n OPTIONS: \n1.Enqueue \n2.Display Queue\n3.Display Front\n4.Dequeue\n0.Exit\n");
	do{
		printf("\nEnter the choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1 : {	
					printf("Enter the data want to insert :");
					scanf("%d",&data);
					enQueue(data);
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

# include<stdio.h>
# define MAX 5

int cqueue_arr[MAX];
int front = -1;
int rear = -1;

/*Begin of insert*/
void insert(int item)
{
	
}
/*End of insert*/

/*Begin of del*/
void del()
{
	
}
/*End of del() */

/*Begin of display*/
void display()
{

}
/*End of display*/

/*Begin of main*/
int main()
{
	int choice,item;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				printf("Input the element for insertion in queue : ");
				scanf("%d", &item);

				insert(item);
				break;
			case 2 :
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				default:
				printf("Wrong choice\n");
		}
	}while(choice!=4);
	
	return 0;
}
/*End of main*/

