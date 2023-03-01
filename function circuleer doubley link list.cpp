#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
};
typedef struct node NODE;
void insert_cll_doubley_beg(NODE **);
void insert_cll_doubley_end(NODE **);
void insert_cll_doubley_loc(NODE *);
void delete_cll_doubley_beg(NODE **);
void delete_cll_doubley_end(NODE *);
void delete_cll_doubley_loc(NODE *);
void traverse(NODE *);
int main()
{
	NODE *start=NULL;
	int ch;
	do
	{
		printf("\n press 1 for insert in begg\n 2 for ending\n 3 for any location insertion\n");
		printf(" press 4 for deletion in begg\n 5 forr ending\n 6 for any location deletion\n");
		printf("press 7 for traverse\n");
		printf(" press 8 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_cll_doubley_beg(&start);
				break;
			case 2:
				insert_cll_doubley_end(&start);
				break;
			case 3:
				insert_cll_doubley_loc(start);
				break;
			case 4:
				delete_cll_doubley_beg(&start);
				break;
			case 5:
				delete_cll_doubley_end(start);
				break;
			case 6:
				delete_cll_doubley_loc(start);
				break;
			case 7:
				traverse(start);
				break;
				
			case 8:
				break;
			default:
				printf(" invalid optin\n");
		}
	}while(ch!=8);
}
void insert_cll_doubley_beg(NODE **start)
{
	NODE *p,*q,*r;
	p=(NODE*)malloc(sizeof(NODE));
	printf(" enter data\n");
	scanf("%d",&p->data);
	p->prev=p->next=p;
	if((*start)== NULL)
	*start=p;
	else
	{
		q=*start;
		while(q->next!=(*start))
		{
			r=q;
			q=q->next;
		}
		p->next=*start;
		(*start)->prev=p;
		p->prev=q;
		q->next=p;
		*start=p;
	}
}
void insert_cll_doubley_end(NODE **start)
{
	NODE *p,*q;
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter data\n");
	scanf("%d",&p->data);
	p->prev=p->next=p;
	if(*start==NULL)
	printf(" not possible because any node is not present\n");
	else
	{
	q=*start;
	while(q->next!=(*start))
	{
		q=q->next;
	}
	p->next=*start;
	q->next=p;
	p->prev=q;
    }
}
void insert_cll_doubley_loc(NODE *start)
{
	NODE *p,*q,*r;
	int loc,i;
	printf(" enter locatin for insert the  node\n");
	scanf("%d",&loc);
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter data\n");
	scanf("%d",&p->data);
	q=start;
	for(i=1;i<loc;i++)
	{
		r=q;
		q=q->next;
	}
	p->next=q;
	p->prev=q->prev;
	r->next=p;
}
void delete_cll_doubley_beg(NODE **start)
{
	NODE *p,*q,*r;
	if(*start==NULL)
	printf(" node are not delete because link list are not present\n");
	else
	{
		p=*start;
		r=p;
		while(p->next!=(*start))
		{
			//q=p;
			p=p->next;
		}
		p->next=(*start)->next;
		((*start)->next)->prev=p;
		*start=(*start)->next;
		free(r);
	}
}
void delete_cll_doubley_end(NODE *start)
{
	NODE *p,*q;
    if(start==NULL)
    printf(" link list is empty and deletion are not possible\n");
    else
    {
    	p=start;
    	while(p->next!=start)
    	{
    		q=p;
    		p=p->next;
		}
		q->next=start;
		start->prev=q;
		free(p);
	}
}
void delete_cll_doubley_loc(NODE *start)
{
	NODE *p,*q;
	int loc,i;
	printf("enter location for deletion\n");
	scanf("%d",&loc);
	p=start;
	for(i=1;i<=loc;i++)
	{
		q=p;
		p=p->next;
	}
	(q->prev)->next=p;
	p->prev=q->prev;
	free(q);
}
void traverse(NODE *start)
{
	NODE *p;
	if(start==NULL)
	printf(" link list is empty \n");
	else
	{
		p=start;
	    printf(" elements are\n");
	    do
	    {
	    	printf("%d",p->data);
	    	p=p->next;
		}while(p!=start);
    }
}


