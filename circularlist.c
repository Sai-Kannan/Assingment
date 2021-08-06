#include<stdio.h>
#include<stdlib.h>
typedef struct sl //
{
	char data;
	struct sl *addr;
}node;
node *first = NULL;
node *last =NULL;
void create (char ele)
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
	do
	{
		printf("%c",temp->data);
		temp=temp->addr;
	}while(temp!=first);
}
int main()
{
	create ('a');
	create ('e');
	create ('i');
	create ('o');
	create ('u');
	display();
}
