#include<stdio.h>
int main()
{
	int n;
	printf("enter size of array ");
	scanf("%d",&n);
	int a[n],front=-1,rear=-1,ch,x,i;
	do
	{
		printf("\n press 1 for insertion in front \n");
		printf(" press 2 for insertion in  rear \n");
		printf(" press 3 for deletion in front\n");
		printf(" press 4 for deletion in rear\n");
		printf(" press 5 for in traveerse \n");
		printf(" press 6 for exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(rear>=n-1)
				printf(" queue is overflow\n");
				else
				{
				 if(front==-1)
				{
					front++;
					rear++;
				}
				else if(front==0)
				{
					for(i=rear;i>=front;i--)
					{
						a[i+1]=a[i];
					}
					rear=rear+1;
				}
				else
				front=front-1;
				printf(" enter data\n");
				scanf("%d",&x);
				a[front]=x;
		    	}
			break;
			case 2:
				if(front==-1)
				{
					front++;
					rear++;
				}
				else
				rear=rear+1;
				printf(" enter data\n");
				scanf("%d",&x);
				a[rear]=x;
			break;
			case 3:
				if(front==-1||front>rear)
				printf(" queue is undeerflow\n");
				else
				{
					printf("%d",a[front]);
					front=front+1;
				}
			break;
			case 4:
				if(front==-1||front>rear)
				printf(" queuq is underflow \n");
				else
				{
					printf("%d",a[rear]);
					rear=rear-1;
				}
			break;
			case 5:
				if(front==-1||front>rear)
				printf(" queue is underflow \n");
				else
				for(i=front;i<=rear;i++)
				printf("%d",a[i]);
			break;
			case 6:
				break;
		}
	}while(ch!=6);
	return 0;
}
