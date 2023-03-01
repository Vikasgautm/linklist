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
	int i,n,x,s,t;
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
	q=start;
	printf("enter lopcation for deletion node");
	scanf("%d",&s);
	for(i=1;i<s;i++)
	{
		p=q;
		q=q->next;
	}
	t=q->data;
	p->next=q->next;
	free(q);
	printf("elements are");
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	return 0;
	
}
