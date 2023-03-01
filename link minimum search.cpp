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
	min=start->data;
	q=start;
	for(i=1;i<=n;i++)
	{
		if(min>q->data)
		{
			min=q->data;
		}
		q=q->next;
	}
	printf("\n minimum value=%d\n",min);
	return 0;
	
}
