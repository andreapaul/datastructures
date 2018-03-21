/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	// your code goes here
	int i,a[100],r,f=0,l,t[100],k=1;
	scanf("%d",&r);

l=r-1;
	
	for(k=0;k<r;k++)
	{
	
			scanf("%d",&a[k]);
	}
	
k=1;

while(k<l){
	
	t[k]=a[k-1]*a[k+1];
	k++;
	
	}
	
	
	t[f]=a[f]*a[f+1];
	t[l]=a[l]*a[l-1];
	
	for(k=0;k<=l;k++)
	{

		printf("%d\n",t[k]);
	}
		
	
return 0;
}
