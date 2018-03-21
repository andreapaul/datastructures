/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,j=0,a[100],r;
	scanf("%d",&r);


	
	for(i=0;i<=r;i++)
	{
	
			scanf("%d",&a[i]);
	}
	
	
	for(i=r-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
		r=r-1;
	}
return 0;
}
