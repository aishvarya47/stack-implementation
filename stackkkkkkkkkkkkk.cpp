#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL;
void push(int value)
{
	struct node*newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		head=newnode;
	
}
void pop()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("STACK IS EMPTY!!");
	}
	else
	{
		printf("POPPED ELEMENT IS=%d\n",head->data);
		temp=head;
		head=head->next;
		free(temp);
	}
}
void display()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("Null\n");
}
int main()
{
	int choice,d;
	printf("STACK IMPLEMENTATION USING LINKED LIST!\n");
	do
	{
		printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("ENTER THE ELEMENTS TO PUSH INTO THE STACK:\n");
					scanf("%d",&d);
					push(d);
				}
			case 2:
				{
					pop();
				}
			case 3:
				{
					display();
				}
			case 4:
				{
					break;
					default:
					printf(" INVALID CHOICE ");
				}
		};
	}
	while(choice!=0);
	{
		printf("INVALID!!TRY AGAIN");
	}
	return 0;
}
