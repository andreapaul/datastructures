#include <stdio.h>

int main(void) {

	int n,a[100],loc,ele,i,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	scanf("%d",&loc);
	scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(a[i]==ele)
d=i;
}

	for(i=d;i<=n;i++)
	{
		a[i]=a[i+1];
	}
n=n-1;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}

	return 0;
}
