#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printarray(int arr[], int n);
void merge(int arr[], int l,int m, int u);
void mergesort(int arr[], int l, int u);

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
	//printarray(array,n);
	clock_t tStart1 = clock();
	mergesort(array, 0, n - 1);
	printf("Time taken for mergesort: %fs\n", (double)(clock() - tStart1)/CLOCKS_PER_SEC);
	//printarray(array,n);
	
	return 0;
	
}

void mergesort(int arr[], int l, int u)
{
	if(l<u)
	{
		int m=l+(u-l)/2;
		
		mergesort(arr, l, m);
		mergesort(arr, m+1, u);
		
		merge(arr, l, m, u);
	}
	
}

void merge(int arr[], int l, int m, int u)
{
	int i, j, k;
	int n1 = m-l+1;
	int n2 = u-m;
	
	int L1[n1], R1[n2];
	
	for(i=0;i<n1;i++)
		L1[i] = arr[l+i];
	for(i=0;i<n2;i++)
		R1[i] = arr[m+1+i];
		
	i=0;
	j=0;
	k=l;
	
	while(i<n1 && j<n2)
	{
		if(L1[i]<R1[j])
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
	
	while(i<n1)
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

//void
