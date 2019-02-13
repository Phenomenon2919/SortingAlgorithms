#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printarray(int arr[], int n);
void insertion(int arr[], int n);
int main()
{
	int n,i,j;
	
	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);
	srand(time(0));
	int array[n];
	
	//Initializing the array
	for(i=0;i<n;i++)
	{
		array[i]=(rand()/100000);
	}
	//printarray(array, n);
	clock_t tStart = clock();
	insertion(array,n);
	printf("Time taken: %fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	
	return 0;
	
}

void insertion(int arr[], int n)
{
	int i, key, j;
   	for (i = 1; i < n; i++)
   	{
   		key = arr[i];
   		j = i-1;

		
	       while (j > -1 && arr[j] > key)
	       {
	           arr[j+1] = arr[j];
	           j = j-1;
	       }
	       arr[j+1] = key;
	}
	//printarray(arr,n);
}

void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}

//void
