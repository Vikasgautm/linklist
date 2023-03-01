#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	int *p,n,i,max=INT_MAX;
	printf("enter size");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter value");
		scanf("%d",p+i);
		if(max<*(p+i));
		max=*(p+i);
	}
	printf("your maximum number=%d",max);
	return 0;
}
