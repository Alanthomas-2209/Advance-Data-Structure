#include<stdio.h>
#include<stdlib.h>
void insertion();
void traverse();
void search();
void addend();
void addspec();
void addbeg();
void deleteend();
void deletespec();
void deletebeg();
int i,n,a;
struct node
{
int data;
struct node *next,*prev;

};
struct node *newnode,*current,*temp,*head=NULL;
void main()
{
do
{
printf("\nOPTIONS\n 1:insertion\n 2:traversing\n 3:searching\n 4:addition at end \n 5:additon after a specific element\n 6:addtion at the beginning\n 7:deltion at the end\n 8:deletion after specific element\n 9:deletion at the beginning  0: Exit\n");
scanf("%d",&a);
switch(a)
{
    case 1:insertion();
    break;
    case 2:traverse();
    break;
    case 3:search();
    break;
    case 4:addend();
    break;
    case 5:addspec();
    break;
    case 6:addbeg();
    break;
    case 7:deleteend();
    break;
    case 8:deletespec();
    break;
    case 9:deletebeg();
    break;
    case 0:printf("Exiting\n");
    break;
    default:printf("invalid Entry\n");
    break;
}

}while(a!=0);

}

void insertion()
{
	printf("how many data do you want to insert \n");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			current=newnode;
//last=current;
			newnode->prev=NULL;
		}
		else
		{
			current->next=newnode;
			newnode->prev=current;
			current=newnode;
//last=current;
		}
	}
}
void traverse()
{
	printf("Linked list:");
	if(head==NULL)
	{
		printf("Linked list is empty....!\n");
	}
	else
	{
		printf(" Doubly Linked list :");
		for(current=head;current!=NULL;current=current->next)
		{
			printf("%d->",current->data);
		}
		printf("NULL");
	}
}
void search()
{
	int item,count=1;
	printf("Enter the number to search\n");
	scanf("%d",&item);
	if(head==NULL)
	{
		printf("Nothing to search\n");
	}
	else
	{
		for(current=head;current->data!=item && current->next!=NULL;current=current->next)
		{
			count++;
		}
		if(current->data==item)
		{
			printf("item founded at %dth linked list",count);
		}
		else
		{
			printf("Item not founded on linked list\n");
		}
	}
}
void addend()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		newnode->prev=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		newnode->prev=temp;
		temp->next=newnode;
	}
}
void addspec()
{
	struct node *ptr;
	int item;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	printf("insert data after:");
	scanf("%d",&item);
	if(head==NULL)
	{
		head=newnode;
		newnode->next=NULL;
		newnode->prev=NULL;
	}
	else
	{
		ptr=head;
		while(ptr->data!=item && ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		newnode->next=ptr->next;
		newnode->prev=ptr;
		ptr->next=newnode;
	}
}
void addbeg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	newnode->prev=NULL;
	newnode->next=head;
	head=newnode;
}
void deleteend()
{
	struct node *preptr,*ptr;
	if(head==NULL)
	{
		printf("Linked list undeflow");
	}
	else
	{
		ptr=head;
		if(ptr->next==NULL)
		{
			printf("Deleted element :%d",ptr->data);
			free(ptr);
			head=NULL;
		}
		else
		{
			while(ptr->next!=NULL)
			{
				preptr=ptr;
				ptr=ptr->next;
			}
			printf("Deleted element :%d",ptr->data);
			preptr->next=NULL;
			free(ptr);
		}
	}	
}
void deletespec()
{
	struct node *preptr,*ptr;
	int item;
	if(head==NULL)
	{
		printf("Linked list undeflow");
	}
	else
	{
		ptr=head;
		//preptr=ptr;
		printf("Enter the data after which you want to delete :\n");
		scanf("%d",&item);
		while(ptr->data!=item && ptr->next!=NULL)
		{
			//preptr=ptr;
			ptr=ptr->next;
		}
		temp=ptr->next;
		printf("Deleted element :%d",temp->data);
		ptr->next=temp->next;
		temp->next->prev=ptr;
		free(temp);
	}	
}
void deletebeg()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("Linked list undeflow");
	}
	else
	{
		ptr=head;
		printf("Deleted element :%d",ptr->data);	
		head=head->next;
		head->prev=NULL;
		free(ptr);
	}
}

