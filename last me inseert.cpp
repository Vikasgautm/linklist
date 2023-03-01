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
	NODE *start=NULL,*p,*q,*r;
	int i,n,x;
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
	p=(NODE*)malloc(sizeof(node));
	printf("enter data for inser for last");
	scanf("%d",&p->data);
	p->next=NULL;
	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;
	printf("elements are");
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	return 0;
	
}
