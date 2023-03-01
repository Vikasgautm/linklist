#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
};
typedef struct node NODE;
void insert_doubley_beg(NODE **);
void insert_doubley_end(NODE **);
void insert_doubley_loc(NODE *);
void delete_doubley_beg(NODE **);
void delete_doubley_end(NODE *);
void delete_doubley_loc(NODE *);
void traverse(NODE *);
int main()
{
	NODE *start=NULL;
	int ch;
	do
	{
		printf(" press 1 for insertion beggining\n 2 for ending\n 3 for any given location\n");
		printf(" press 4 for deletion beggining\n 5 for ending\n 6 for any given location\n");
		printf(" press 7 traverse\n");
		printf(" press 8 for exit\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
	    		insert_doubley_beg(&start);
	    		break;
	    	case 2:
	    		insert_doubley_end(&start);
	    		break;
	    	case 3:
	    		insert_doubley_loc(start);
	    		break;
	    	case 4:
	    		delete_doubley_beg(&start);
	    		break;
	    	case 5:
	    		delete_doubley_end(start);
	    		break;
	    	case 6:
	    		delete_doubley_loc(start);
	    		break;
	    	case 7:
	    		traverse(start);
	    		break;
	    	case 8:
	    		break;
	    	default:
	    		printf(" invalid option\n");
		}
	}while(ch!=8);
}
 void insert_doubley_beg(NODE **start)
 {
 	NODE *q,*p;
 	p=(NODE*)malloc(sizeof(NODE));
 	printf(" enter data\n");
 	scanf("%d",&p->data);
 	p->prev=p->next=NULL;
 	if((*start)==NULL)
 	*start=p;
 	else
 	{
 		p->next=(*start);
 		(*start)->prev=p;
 		*start=p;
	 }
 }
 void insert_doubley_end(NODE **p)
 {
 	NODE *q,*r;
 	q=(NODE*)malloc(sizeof(NODE));
 	printf(" enter data\n");
 	scanf("%d",&q->data);
 	q->prev=q->next=NULL;
 	if(*p==NULL)
 	printf("not possible");
 	else
 	{
 		r=*p;
 		while(r->next!=NULL)
 		{
 			r=r->next;
		 }
		r->next=q;
		q->prev=r;
	 }
 }
 void insert_doubley_loc( NODE *start)
 {
 	NODE *q,*p,*r;
 	int loc,i;
 	printf(" enter location of make node\n");
 	scanf("%d",&loc);
 	q=(NODE*)malloc(sizeof(NODE));
 	printf(" enter data\n");
 	scanf("%d",&q->data);
 	q->next=q->prev=NULL;
 	p=start;
 	for(i=1;i<loc;i++)
 	{
 		r=p;
 		p=p->next;
	 }
	 r->next=q;
	 q->prev=r;
	 q->next=p;
	 p->prev=q;
 }
void delete_doubley_beg(NODE **start)
{
	NODE *p,*q;
	if((*start)==NULL)
	printf(" link list nis empty and  deletion are not possible\n");
	else
	{
		q=*start;
		(*start)=(*start)->next;
		(*start)->prev=NULL;
		free(q);
	}
}
void delete_doubley_end(NODE *start)
{
	NODE *p,*q;
	if(start==NULL)
	printf(" deletion are not possible");
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			p=q;
			q=q->next;
		}
		p->next=NULL;
		free(q);
	}
}
void delete_doubley_loc(NODE *start)
{
	NODE *p,*q;
	int loc,i;
	printf(" enter location for delation node\n");
	scanf("%d",&loc);
	p=start;
	for(i=1;i<loc;i++)
	{
		q=p;
		p=p->next;
	}
	q->next=p->next;
	(p->next)->prev=q;
	free(p);
}
void traverse(NODE *start)
{
	NODE *p;
	if(start==NULL)
	printf(" link list are empty\n");
	else
	{
		printf(" elements are\n");
		for(p=start;p!=NULL;p=p->next)
		{
			printf("%d",p->data);
		}
	}
}
