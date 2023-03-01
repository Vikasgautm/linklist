#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,min,j;
	printf("enter size");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	min=*p;
	for(i=0;i<=n;i++)
	{
		printf("enter value");
		scanf("%d",p+i);
	//	if(min>=*(p+i))
	//	min=*(p+i);
	//	printf("your sorting array=%d",min);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
	{
		if(*(p+i)>=*(p+j))
	     min=*(p+j);
	     *(p+j)=*(p+i);
	     *(p+i)=min;
	}
}
printf("sorted array");
for(i=0;i<n;i++)
{
	printf("%d",*(p+i));
}
	return 0;
}
