/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i=0,j,temp,a[100],miss,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
			          a[i]=a[j];
				a[j]=t;
			}
		}
	}

i=0;
while(i<n)
{
		for(j=i+1;j<n;j++)
		{
			temp=a[j]-1;
			if(temp!=a[i])
			{
			         miss=a[i]+1;
			        break;
			         
			}
			
		i++;	
		
		}
	break;
	}
	printf("%d\n",miss);
return 0;
}
