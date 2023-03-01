#include<stdio.h>

	int main()
	{
		
		int a[100],i,x,n,item,loc,z;
		do
		{
		printf("press 1 for insertion\n");
		scanf("%d",&x);
		switch(x)
		{
		  case(1):
		  	
		printf("enter size");
		scanf("%d",&n);
		printf("enter elememnt\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("enter location");
		scanf("%d",&loc);
		item=a[loc];
		for(i=loc;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("for update the array\n");
		for(i=0;i<n-1;i++)
		{
			printf("%d",a[i]);
		}
		printf("repeat process so press 1\n");
		scanf("%d",&z);
	}
	}while(z==1);
		

	return 0;
}
