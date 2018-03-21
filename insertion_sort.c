#include<stdio.h>
int main(void)
{
	int i,j,n,a[100],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=1;i<=n-1;i++)
	{
	j=i;
	while(j>0&&a[j]<a[j-1])
	
			{
	temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
		j--;
		}
	}
	
	




	



	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
