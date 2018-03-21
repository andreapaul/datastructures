#include<stdio.h>
int main(void)
{
	int a[100],i,search,n;
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	scanf("%d",search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("%d",a[i]);
		}
	}
}
