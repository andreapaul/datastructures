/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i=0,j,temp,a[100],miss,t[100],k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				t[k]=a[i];
				k++;
			}
		
		}
	}
	for(i=0;t[i]!='\0';i++)
	{
		printf("%d",t[i]);
	}
	

return 0;
}
