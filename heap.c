#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void max_heapbuild(int arr[], int n, int x);
void printarray(int arr[], int n);
void heapsort(int arr[], int n);
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
	clock_t tStart = clock();void printarray(int arr[], int n);
	heapsort(array, n);
	//printarray(array, n);
	printf("Time taken: %fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	
	return 0;
}
void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}

void heapsort(int arr[], int n)
{
	int i,temp;
	for(i = n/2 - 1; i>=0; i--)
	{
		max_heapbuild(arr, n, i);
	}
	
	for(i = n-1; i >= 0; i--)
	{
		temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		
		max_heapbuild(arr, i, 0);
	}
}

void max_heapbuild(int arr[], int n, int x)
{
	int temp;
	int max = x;
	int lc = 2*x + 1;
	int rc = 2*x + 2;
	
	
	if(lc < n && arr[lc] > arr[max])
	{
		max = lc;
	}
	
	if(rc < n && arr[rc] > arr[max])
	{
		max = rc;
	}
	
	if(max != x)
	{
		temp = arr[x];
		arr[x] = arr[max];
		arr[max] = temp;
		
		max_heapbuild(arr, n, max);
	}
}
