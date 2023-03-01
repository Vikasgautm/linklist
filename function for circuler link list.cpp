#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
void insert_cll_beg(NODE **);
void insert_cll_end(NODE **);
void insert_cll_loc(NODE *);
void delete_cll_beg(NODE **);
void delete_cll_end(NODE *);
void delete_cll_loc(NODE *);
void traverse(NODE *);
int main()
{
	NODE  *start=NULL;
	int ch;
	do
	{
		printf(" press 1 for insert in  beg \n 2 for end\n 3 for any location\n");
		printf(" press 4 for deletion in  beggining\n 5 for deletion in endiing\n 6 for any location\n ");
		printf(" press 7 for traverse\n");
		printf(" press 8 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_cll_beg(&start);
				break;
			case 2:
				insert_cll_end(&start);
				break;
			case 3:
				insert_cll_loc(start);
				break;
			case 4:
				delete_cll_beg(&start);
				break;
			case 5:
				delete_cll_end(start);
				break;
			case 6:
				delete_cll_loc(start);
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
void insert_cll_beg(NODE **start)
{
	NODE *q,*p;
	p=(NODE*)malloc(sizeof(NODE));
	printf(" enter data\n");
	scanf("%d",&p->data);
	if((*start)==NULL)
	{
		*start=p;
		p->next=*start;
	}
	else
	{
		q=*start;
		while(q->next!=(*start))
		{
			q=q->next;
		}
		p->next=q;
		q->next=p;
		*start=p;
	}
}
void insert_cll_end(NODE **start)
{
	NODE *q,*p;
	p=(NODE*)malloc(sizeof(NODE));
	printf(" enter data\n");
	scanf("%d",&p->data);
	p->next=*start;
	q=*start;
	while(q->next!=(*start))
	{
		q=q->next;
	}
	q->next=p;
//	if((*start)==NULL)
//	{
//		*start=p;
//		p->next=(*start);
//	}
//	else
//	{
//		q=*start;
//		while(q->next!=(*start))
//		{
//			q=q->next;
//		}
//		p->next=q;
//		q->next=p;
//	}
}
void insert_cll_loc(NODE *start)
{
	NODE *q,*p,*r;
	int loc,i;
	printf(" enter location of insert node\n");
	scanf("%d",&loc);
	p=start;
	q=(NODE*)malloc(sizeof(NODE));
	printf(" enter data\n");
	scanf("%d",&q->data);
	for(i=1;i<loc;i++)
	{
		r=p;
		p=p->next;
	}
	r->next=q;
	q->next=p;
}
void delete_cll_beg(NODE **p)
{
	NODE *q,*r;
	if((*p)==NULL)
	printf(" link list id=s empty and deletion  is not possible\n");
	else
	{
		q=*p;
		r=*p;
		while(q->next!=*p)
		{
			q=q->next;
		}
		*p=(*p)->next;
		q->next=*p;
		free(r);
	}
}
void delete_cll_end(NODE *p)
{
	NODE *q,*r;
	if(p==NULL)
	printf(" link list is empty and deletion is  not possible\n");
	else
	{
		q=p;
		while(q->next!=p)
		{
			r=q;
			q=q->next;
		}
		r->next=p;
		free(q);
	}
}
void delete_cll_loc(NODE *p)
{
	NODE *q,*r;
	int loc,i;
	printf(" enter location for deletion\n");
	scanf("%d",&loc);
	if(p==NULL)
	printf(" deletion are not possible becausse node are not present\n");
	else
	{
		q=p;
		for(i=1;i<loc;i++)
		{
			r=q;
			q=q->next;
		}
		r->next=q->next;
		free(q);
	}
}
void traverse(NODE *p)
{
	NODE *q;
	if(p==NULL)
	printf(" link list is empty\n");
	else
	{
		q=p;
		printf(" elements are\n");
		do
		{
			printf("%d",q->data);
			q=q->next;
		}while(q!=p);
	}
}
