#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printarray(int arr[], int n);
void selection(int arr[], int n);
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
	clock_t tStart = clock();
	selection(array,n);
	printf("Time taken: %fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	
	return 0;
	
}

void selection(int arr[], int n)
{
	int i,j,temp,key;
	for(i=0;i<n;i++)
	{
		key=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[key]>arr[j])
			{
				key=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[key];
		arr[key]=temp;
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
