#include<stdio.h>
#include<stdlib.h>
typedef struct sl //
{
	int data;
	struct sl *addr;
}node;
node *first = NULL;
node *last =NULL;
void create (int ele)
{
	node *ptr =(node*)malloc(sizeof(node));
	ptr->data= ele;
	ptr->addr = NULL;
	if(first==NULL)
	{
		first =ptr;
		last =ptr;
	}
	else
	{
		last->addr = ptr;
		last =ptr;
		last->addr=first;
	}
}
void display()
{
	node *temp= first;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->addr;
	}
	free(temp);
}
int main()
{
	create (100);
	create (200);
	create (300);
	display();
}
