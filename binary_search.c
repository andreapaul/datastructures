#include<stdio.h>
int main(void)
{
	int n,search,a[100],middle,first=0,last=n-1,temp,i,j;
	middle=(first+last)/2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
	}
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(search==a[middle])
	{
		printf("%d",middle+1);
	}
	else if(search<a[middle])
	{
		for(i=0;i<middle;i++)
		{
			if(a[i]==search)
			{
				printf("%d",i+1);
			}
		}
	}
	else
	{
		for(i=middle;i<n;i++)
		{
			if(a[i]==search)
			{
				printf("%d",i+1);
			}
		}
	}
	}
}