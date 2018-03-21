#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],n,i,max,temp,second;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	temp=max;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max&&a[i]!=temp)
		{
			max=a[i];
		}
	}
	second=max;
	printf("%d",second);
	return 0;
}
