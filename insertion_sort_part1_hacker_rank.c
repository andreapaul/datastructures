#include<stdio.h>
void print(int arr[10000],long int size,long int e);
void print(int arr[10000],long int size,long int e)
{
    long int i;
  for(i=0;i<size;i++)
 
 
  {
    
              printf("%d\t",arr[i]);
               
         
  }
          printf("\n");
          
      
  }

int main(void)
{
    int arr[10000];
    long int size,e,i,j;
    scanf("%ld",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    e=arr[size-1];
        for(i=size-2;arr[i]>=arr[i-1];i--)
    {
        if(arr[i]>e)
        {
            arr[i+1]=arr[i];
           arr[i]=arr[i+1];
            print(arr,size,e);
    
            
    }
            else if(arr[i]<e)
            {
                arr[i+1]=e; 
            print(arr,size,e);}
        
       
        }
    
      
    
        
    

    
    
}
