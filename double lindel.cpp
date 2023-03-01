#include<stdio.h>
#include<stdlib.h
>
struct node
{
	int data;
	struct node *next,*prev;
};
typedef struct node NODE;
int main()
{
	NODE *start=NULL,*p,*q;
	int n;
	printf("enter total no.node");
	scanf("%d",&n);
	for(;n>0;n--)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("enter data");
		scanf("%d",&p->data);
		p->prev=p->next=NULL;
		if(start==NULL)
		start=p;
		else
		{
			q->next=p;
			p->prev=q;
		}
		q=p;
	}
	p=start;
	start=start->next;
	free(p);
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	return 0;
}
