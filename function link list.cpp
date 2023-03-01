#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
void insert_beg(NODE **);
void insert_end(NODE *);
void delete_beg(NODE **);
void delete_end(NODE *);
void traverse(NODE *);
int main()
{
	NODE *start=NULL;
	int ch;
	do
	{
		printf(" press 1 for insertion in  begginiong \n");
		printf(" press 2 for insertion in  ending \n");
		printf(" press 3 for deletion in  begginiong \n");
		printf(" press 4 for deletion in  ending \n");
		printf(" press 5 for traverse \n");
    	printf(" press 6 for exit \n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
	    		insert_beg(&start);
	    		break;
	    	case 2:
	    		insert_end(start);
	    		break;
	    	case 3:
	    		delete_beg(&start);
	    		break;
	    	case 4:
	    		delete_end(start);
	    		break;
	    	case 5:
	    		traverse(start);
	    		break;
	    	case 6:
	    		break;
	    	default:
	    	printf(" invalid option \n");
		}
	}while(ch!=5);
	return 0;
}
void insert_beg(NODE **p)
{
	NODE *q;
	q=(NODE*)malloc(sizeof(NODE));
	printf(" enter data");
	scanf("%d",&q->data);
	q->next=*p;
	*p=q;
}
void insert_end(NODE *start)
{
	NODE *p,*q;
	p=(NODE*)malloc(sizeof(NODE));
	printf(" enter data");
	scanf("%d",&p->data);
	p->next=NULL;
	if(start==NULL)
	start=p;
	else
	{
		q=start;
		while(q->next!=NULL)
		q=q->next;
		q->next=p;
	}
}
void delete_beg(NODE **p)
{
	NODE *q;
	if(*p==NULL)
	printf(" link list is empty and deletion is not possible\n");
	else
	{
		q=*p;
		*p=q->next;
		free(q);
	}
}
void delete_end(NODE *start)
{
	NODE *q,*p;
	if(start==NULL)
	printf(" link list is empty and deletion not possible \n");
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			p=q;
			q=q->next;
		}
		p->next==NULL;
		free(q);
	}
}
void traverse(NODE *start)
{
	NODE *p;
	if(start==NULL)
	printf(" link list is empty\n");
	else
	{
	printf(" elements are \n");
	for(p=start;p!=NULL;p=p->next)
	{
		printf("%d",p->data);
	}
}
}
