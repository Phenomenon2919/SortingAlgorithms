#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printarray(int arr[], int n);
void bubble(int arr[], int n);
void insertion(int arr[], int n);
void selection(int arr[], int n);
void merge(int arr[], int l,int m, int u);
void mergesort(int arr[], int l, int u);
void quicksort(int arr[], int l, int h);
int partition(int arr[], int l, int h);
void insertion1(int arr[], int l, int h);
void heapsort(int arr[], int n);
void max_heapbuild(int arr[], int n, int x);
int main()
{
	int n,i,j;
	FILE *fp; 
	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);
	srand(time(0));
	int *array1 = malloc(n * sizeof(int));
	int *array2 = malloc(n * sizeof(int));
	int *array3 = malloc(n * sizeof(int));
	int *array4 = malloc(n * sizeof(int));
	int *array5 = malloc(n * sizeof(int));
	int *array6 = malloc(n * sizeof(int));
	
												//Initializing the array
	for(i=0;i<n;i++)
	{
		array1[i]=(rand()/100000);
		array2[i]=(rand()/100000);
		array3[i]=(rand()/100000);
		array4[i]=(rand()/100000);
		array5[i]=(rand()/100000);
		array6[i]=(rand()/100000);
	}
	fp = fopen("fileSort.txt", "w" );							//writing in file
	
						//for n = 10000
	
	fprintf(fp,"For n = %d\n",n);
	clock_t tStart1 = clock();
	insertion(array1,n);
	fprintf(fp,"Time taken for insertion sort: %fs\n", (double)(clock() - tStart1)/CLOCKS_PER_SEC);
	
	clock_t tStart2 = clock();
	selection(array2,n);
	fprintf(fp,"Time taken for selection sort: %fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);
	
	clock_t tStart3 = clock();
	bubble(array3,n);
	fprintf(fp,"Time taken for bubble sort: %fs\n", (double)(clock() - tStart3)/CLOCKS_PER_SEC);
		
	clock_t tStart4 = clock();
	mergesort(array4, 0, n - 1);
	fprintf(fp,"Time taken for mergesort: %fs\n", (double)(clock() - tStart4)/CLOCKS_PER_SEC);
	
	clock_t tStart5 = clock();
	quicksort(array5, 0 , n-1);
	fprintf(fp,"Time taken for quicksort: %fs\n", (double)(clock() - tStart5)/CLOCKS_PER_SEC);
	
	clock_t tStart6 = clock();
	heapsort(array6, n);
	fprintf(fp,"Time taken for heapsort: %fs\n", (double)(clock() - tStart6)/CLOCKS_PER_SEC);
	
	n=n*10;					//for n = 100000
	free(array1);
	free(array2);
	free(array3);
	free(array4);
	free(array5);
	free(array6);
	array1 = malloc(n * sizeof(int));
	array2 = malloc(n * sizeof(int));
	array3 = malloc(n * sizeof(int));
	array4 = malloc(n * sizeof(int));
	array5 = malloc(n * sizeof(int));
	array6 = malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		array1[i]=(rand()/100000);
		array2[i]=(rand()/100000);
		array3[i]=(rand()/100000);
		array4[i]=(rand()/100000);
		array5[i]=(rand()/100000);
		array6[i]=(rand()/100000);
	}
	
	fprintf(fp,"For n = %d\n",n);
	tStart1 = clock();
	insertion(array1,n);
	fprintf(fp,"Time taken for insertion sort: %fs\n", (double)(clock() - tStart1)/CLOCKS_PER_SEC);
	
	tStart2 = clock();
	selection(array2,n);
	fprintf(fp,"Time taken for selection sort: %fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);
	
	tStart3 = clock();
	bubble(array3,n);
	fprintf(fp,"Time taken for bubble sort: %fs\n", (double)(clock() - tStart3)/CLOCKS_PER_SEC);
	
	tStart4 = clock();
	mergesort(array4, 0, n - 1);
	fprintf(fp,"Time taken for mergesort: %fs\n", (double)(clock() - tStart4)/CLOCKS_PER_SEC);
		
	tStart5 = clock();
	quicksort(array5, 0 , n-1);
	fprintf(fp,"Time taken for quicksort: %fs\n", (double)(clock() - tStart5)/CLOCKS_PER_SEC);
	
	tStart6 = clock();
	heapsort(array6, n);
	fprintf(fp,"Time taken for heapsort: %fs\n", (double)(clock() - tStart6)/CLOCKS_PER_SEC);
	
	n=n*10;					//for n = 1000000
	free(array1);
	free(array2);
	free(array3);
	free(array4);
	free(array5);
	free(array6);
	array1 = malloc(n * sizeof(int));
	array2 = malloc(n * sizeof(int));
	array3 = malloc(n * sizeof(int));
	array4 = malloc(n * sizeof(int));
	array5 = malloc(n * sizeof(int));
	array6 = malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		array1[i]=(rand()/100000);
		array2[i]=(rand()/100000);
		array3[i]=(rand()/100000);
		array4[i]=(rand()/100000);
		array5[i]=(rand()/100000);
		array6[i]=(rand()/100000);
	}
	
	fprintf(fp,"For n = %d\n",n);
	tStart1 = clock();
	insertion(array1,n);
	fprintf(fp,"Time taken for insertion sort: %fs\n", (double)(clock() - tStart1)/CLOCKS_PER_SEC);
	
	tStart2 = clock();
	selection(array2,n);
	fprintf(fp,"Time taken for selection sort: %fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);
	
	tStart3 = clock();
	bubble(array3,n);
	fprintf(fp,"Time taken for bubble sort: %fs\n", (double)(clock() - tStart3)/CLOCKS_PER_SEC);
	
	tStart4 = clock();
	mergesort(array4, 0, n - 1);
	fprintf(fp,"Time taken for mergesort: %fs\n", (double)(clock() - tStart4)/CLOCKS_PER_SEC);
		
	tStart5 = clock();
	quicksort(array5, 0 , n-1);
	fprintf(fp,"Time taken for quicksort: %fs\n", (double)(clock() - tStart5)/CLOCKS_PER_SEC);
	
	tStart6 = clock();
	heapsort(array6, n);
	fprintf(fp,"Time taken for heapsort: %fs\n", (double)(clock() - tStart6)/CLOCKS_PER_SEC);
	
	fclose(fp);
	return 0;
	
}

void bubble(int arr[], int n)							//bubble sort
{
	int i,j,temp;
	for(i=0;i<n;i++)						//outer loop
	{
		for(j=0;j<n-i;j++)					//inner loop
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	//printarray(arr,n);
}
void insertion(int arr[], int n)					//insertion sort
{
	int i, key, j;
   	for (i = 1; i < n; i++)						// outer loop
   	{
   		key = arr[i];						
   		j = i-1;

		
	       while (j > -1 && arr[j] > key)				
	       {
	           arr[j+1] = arr[j];
	           j = j-1;
	       }
	       arr[j+1] = key;						//placing correct element in each position
	}
	//printarray(arr,n);
}
void selection(int arr[], int n)					//selection sort
{
	int i,j,temp,key;
	for(i=0;i<n;i++)						//outer loop
	{
		key=i;
		for(j=i+1;j<n;j++)					//inner loop
		{
			if(arr[key]>arr[j])
			{
				key=j;					// finding largest element
			}
		}
		temp=arr[i];
		arr[i]=arr[key];
		arr[key]=temp;
	}
	//printarray(arr,n);
}
void mergesort(int arr[], int l, int u)					//  Merge Sort
{
	if(l<u)								// checking if lower bound is smaller than higher bound
	{
		int m=l+(u-l)/2;					// finding middle position
		
		mergesort(arr, l, m);					// recursive calling on first half of array
		mergesort(arr, m+1, u);					// recursive calling on second half of array
		
		merge(arr, l, m, u);					//call merge function on the partitions of the array after sorting 
	}
	
}

void merge(int arr[], int l, int m, int u)				// merge function to sort and join two halfs of array
{
	int i, j, k;
	int n1 = m-l+1;
	int n2 = u-m;
	
	int L1[n1], R1[n2];						// create two local arrays to store two halves of the array
	
	for(i=0;i<n1;i++)						//storing left half of array in L1
		L1[i] = arr[l+i];
	for(i=0;i<n2;i++)						//storing right half of array in R1
		R1[i] = arr[m+1+i];
		
	i=0;	
	j=0;
	k=l;
	
	while(i<n1 && j<n2)						// loop to store elements of both arrays in main array in sort
	{
		if(L1[i]<R1[j])						// condition to find greater element from left or right array 
		{
			arr[k] = L1[i];
			i++;
		}
		else
		{
			arr[k] = R1[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)							// loops to store remaining element
	{
		arr[k] = L1[i];
		i++;
		k++;
	}
	
	while(j<n2)
	{
		arr[k] = R1[j];
		j++;
		k++;
	}
	
	
}
void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void quicksort(int arr[], int l, int h)					// Quick Sort
{
	int p;
	if(h - l <= 100)
	{
		insertion1(arr, l, h);					// calling insertion sort if number of elements less than 100 
	}
	else
	{
		p = partition(arr, l, h);				// calling partition to create two arrays and assigning pivot value
		
		quicksort(arr, l, p-1);					// recursive calling for elements at position smaller than pivot
		quicksort(arr, p+1, h);					// recursive calling for elements at position greater than pivot
	}
}
int partition(int arr[], int l, int h)					// function for partition 
{
	int p = arr[l+(h-l)/2];						// setting middle element as pivot
	int j,temp;
	int i = l - 1;							
	
	for(j = l; j < h; j++)						// sorting elements lower than pivot
	{
		if(arr[j] <= p)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	temp = arr[i+1];						// swapping correct element with pivot
	arr[i+1] = arr[l+(h-l)/2];
	arr[l+(h-l)/2] = temp;
	
	return(i+1);
	
}
void insertion1(int arr[], int l, int h)				// modified insertion sort for quick sort 
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

void heapsort(int arr[], int n)						// Heap Sort
{
	int i,temp;
	for(i = n/2 - 1; i>=0; i--)					// Heapifying the unsorted array for having all element with child lower
	{
		max_heapbuild(arr, n, i);
	}
	
	for(i = n-1; i >= 0; i--)
	{
		temp = arr[i];
		arr[i] = arr[0];					// swapping the root element with leaf element
		arr[0] = temp;
		
		max_heapbuild(arr, i, 0);				// heapify the array with one misplaced element 
	}
}

void max_heapbuild(int arr[], int n, int x)				// Heapify function
{
	int temp;
	int max = x;
	int lc = 2*x + 1;						// storing left child of element
	int rc = 2*x + 2;						// storing right child of element
								
								// find max element from children and parent
	
	if(lc < n && arr[lc] > arr[max])
	{
		max = lc;						
	}
	
	if(rc < n && arr[rc] > arr[max])
	{
		max = rc;
	}
	
	if(max != x)							// sorting children if max not root
	{
		temp = arr[x];
		arr[x] = arr[max];
		arr[max] = temp;
		
		max_heapbuild(arr, n, max);				// calling heapify on children
	}
}

