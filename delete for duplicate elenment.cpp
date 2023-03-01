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
	printf("elements are");
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	for(p=start;p!=NULL;p=p->next)
	r=start;
	q=start->next;
	{
		while(q!=NULL)
		{
			if(p->data==q->data)
			{
				r->next=q->next;
				free(q);
			}
           r=q;
            q=q->next;
		}
//	printf("%d",p->data);
	}
	printf(" duplicater elements after deletee\n");
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	return 0;
	
}
