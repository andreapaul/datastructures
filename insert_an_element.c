#include <stdio.h>

int main(void) {

	int n,a[100],i,ele,loc;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&loc);
	scanf("%d",&ele);

for(i=n-1;i>=loc-1;i--)
{
	a[i+1]=a[i];
}
a[loc-1]=ele;
for(i=0;i<=n;i++)
{
	printf("%d",a[i]);
}


	
	

	return 0;
}
