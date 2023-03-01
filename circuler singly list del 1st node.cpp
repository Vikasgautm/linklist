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
	NODE *p,*q,*start=NULL;
	int n,s,i;
	printf("enter make the node");
	scanf("%d",&n);
	for(;n>0;n--)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("enter data");
		scanf("%d",&p->data);
		if(start==NULL)
		start=p;
		else
		q->next=p;
		p->next=start;
		q=p;
}
	p=start;
	start=start->next;
	q->next=start;
	free(p);
	q=start;
	
	do
	{
		printf("%d",q->data);
		q=q->next;
	}while(q!=start);
	return 0;
	
	
}
