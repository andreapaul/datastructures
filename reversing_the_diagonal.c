#include <stdio.h>
//using namespace std;

int swap(int array[10][10],int i,int j);
int swap1(int array[10][10],int i,int j);
int swap(int array[10][10],int i,int j)
{
	int t[i][j];
t[i][i]=array[i][i];
array[i][i]=array[j-1][j-1];
array[j-1][j-1]=t[i][i];
return array;

}
int swap1(int array[10][10],int i,int j)
{
	int t[i][j];
t[i][j-1]=array[i][j-1];
array[i][j-1]=array[j-1][i];
array[j-1][i]=t[i][j-1];
return array[i][j];
}
// Function to swap diagonals elements
void reverseDiagonal(int array[10][10],int N)
{
	int i = 0, j = N; 
	while (i < j) {

		// For reversing elements of major
		// diagonal.
		swap(array,i,j);

		// For reversing elements of minor
		// diagonal.
		swap1(array,i,j);

		i++;
		j--;
	}

	// Print matrix after reversals.
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++){
			printf("%d ", array[i][j]);}
		printf("\n");
	}
}

// Driver function
int main()
{int N;
int array[10][10],i,j;
	scanf("%d",&N);
		
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	reverseDiagonal(array,N);
	
	return 0;
}
