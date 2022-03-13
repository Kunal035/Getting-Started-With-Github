#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	for(;i<n;i++)
	scanf("%d",a+i);
	
	int m;
	printf("enter number");
	scanf("%d",&m);

	int lb=0;
	int ub=n-1;
	int me;
	while(lb<ub)
	{
		me=(lb+ub)/2;
		if(a[me]==m)
		{
			break;
		}
		if(a[me]>m)
		{
			ub=me-1;
		}
		else
		{
			lb=me+1;
		}
	}

	if(lb>=ub)
	{
		printf("number not found");
	}
	else
	{
		printf("number found at %d index",me);
}
}



