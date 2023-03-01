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
	int i,n,x,min;
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
		printf(" %d,",p->data);
	}
	q=start;
	if(n%2!=0)
	{
		for(i=1;i<=n/2;i++)
		{
			q=q->next;
		}
		printf("\n midddle node=%d",q->data);
	}
	else
	{
		for(i=1;i<=((n/2)+((n/2)+1))/2;i++)
		{
			q=q->next;
		}
		printf("\nmiddle node=%d",q->data);
	}
	return 0;
	
}
