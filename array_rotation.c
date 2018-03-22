#include<stdio.h>
int rotate(int a[],int n,int d);
int main(void)
{
    int n,d,a[1000000],i;
    
    scanf("%ld",&n);
    
     scanf("%ld",&d);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        
}
    rotate(a,n,d);
}
    int rotate(int a[],int n,int d)
    {
       int temp,i,j;
       
        for(i=0;i<d;i++)
        {
            temp=a[0];
        for(j=1;j<n;j++)
        {
        
            a[j-1]=a[j];
           
        }  
             a[n-1]=temp;
        }
        for(j=0;j<n;j++)
        {
            printf("%ld\t",a[j]);
        }
        return 0;
    }
    
