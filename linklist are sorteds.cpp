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
	NODE *start=NULL,*p,*q;
	int i,n,x,j,r;
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
	printf("enter value for deletion");
	scanf("%d",&j);
	for(i=1;i<=n;i++)
	{p=q;
	{
	
		if(j==q->data)
		{
			r=q->data;
		}
		free(r);
	}
	q=q->next;
}
for(p=start;p!=NULL;p=p->next)
{
	printf("%d",p->data);
}
	return 0;
	
}
