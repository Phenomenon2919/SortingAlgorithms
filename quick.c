#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void quicksort(int arr[], int l, int h);
int partition(int arr[], int l, int h);
void insertion1(int arr[], int l, int h);
void printarray(int arr[], int n);
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
	quicksort(array, 0 , n-1);
	//printarray(array, n);
	printf("Time taken: %fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	
	return 0;
}
void quicksort(int arr[], int l, int h)
{
	int p;
	if(h - l <= 100)
	{
		insertion1(arr, l, h);
	}
	else
	{
		p = partition(arr, l, h);
		
		quicksort(arr, l, p-1);
		quicksort(arr, p+1, h);
	}
}
int partition(int arr[], int l, int h)
{
	int p = arr[l+(h-l)/2];
	int j,temp;
	int i = l - 1;
	
	for(j = l; j < h; j++)
	{
		if(arr[j] <= p)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	temp = arr[i+1];
	arr[i+1] = arr[l+(h-l)/2];
	arr[l+(h-l)/2] = temp;
	
	return(i+1);
	
}
void insertion1(int arr[], int l, int h)
{
	int i, key, j;
   	for (i = l; i < h+1; i++)
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


