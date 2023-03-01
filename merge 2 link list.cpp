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
	
	
		NODE *p,*q,*start=NULL ,*start1=NULL,*r,*t;;
		int n;
		printf(" enter size of 1stlink list \n");
		scanf("%d",&n);
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
		printf("elements are 1st link list\n");
		for(p=start;p!=NULL;p=p->next)
		{
			printf("%d",p->data);
		}
	    int s;
	    printf("\nenter  size of 2nd link list \n ");
		scanf("%d",&s);
		for(;s>0;s--)
		{
			p=(NODE*)malloc(sizeof(NODE));
			printf("entern data");
			scanf("%d",&p->data);
			p->next=NULL;
			if(start1==NULL)
			start1=p;
			else
			q->next=p;
			q=p;
		}
		printf("elements are 2nd link list \n");
		for(p=start1;p!=NULL;p=p->next)
		{
			printf("%d",p->data);
		}
	
	
	
	return 0;
}
