#include<stdio.h>
int main(void)
{
	int i,j,n,a[100],temp,position;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(a[position]>a[j])
			{
				position=j;
			}
			if(position!=i){
	temp=a[i];
		a[i]=a[position];
		a[position]=temp;}
		}
		
	
	}




	



	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
