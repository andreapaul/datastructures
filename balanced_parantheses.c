#include <stdio.h>
#include<string.h>
int balancedParantheses(char *str);

int main(void) {
	// your code goes here
	int result;
	char str1[10];
	
	scanf("%s",str1);
	char *str=str1;
	
	result=balancedParantheses(str);
	
		
		
	
if(result==0)
	{
		result=-1;
		printf("%d",result);
	}
	else
	{

	printf("%d",result);
	}
	
	return 0;
}

int balancedParantheses(char *str)
{
	int i,l,count=0,top=-1;
	char str1[10];
	char temp[10];


	l=strlen(str);
	for(i=0;i<l;i++)
	
	{
	
	if(str[i]=='(')
	{
	temp[top]=str[i];
	top++;
	}
	
        else if(str[i]==')')
		{
	
			top--;
			count++;
		
		
		
		
		}
	
		
		
			
			
		}
		if(top==-1)
		{
		
		return count;
		}
		else
		{
		
			return 0;
		}
	
}

	
