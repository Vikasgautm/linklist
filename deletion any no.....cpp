#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef  struct node NODE;
int main()
{
	NODE *start=NULL,*p,*q,*r,*prev;
	int i,n,x,s;
	printf("enter no.of node ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=(NODE*)malloc(sizeof(node));
		printf("enter data");
		scanf("%d",&x);
		p->data=x;
		p->next=NULL;
		if(start==NULL)
		start=p;
		else
		q->next=p;
		q=p;
	}
	printf("elements are");
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	q=start;
	printf("enter value for deletion");
	scanf("%d",&s);
	for(i=1;i<=n;i++)
	{
		if(s==q->data)
		{
			p=q;
			r=q->data;
		}
		q=q->next;
	
	}
	r->prev=q;
	q->next=NULL;
	printf(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	
	return 0;
	
}
