#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
int main()
{
	NODE *p,*q,*r,*start=NULL;
	int n;
	printf("enter size of node \n");
	scanf("%d",&n);
	printf(" enter data for incressing order \n");
	for(;n>0;n--)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("enter data");
		scanf("%d",&p->data);
		p->next=NULL;
		if(start==NULL)
		start=p;
		else
		q->next=p;
		q=p;
	}
	printf("elements are \n");
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
	return 0;
}
