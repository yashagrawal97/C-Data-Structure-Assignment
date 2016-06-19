#include<stdio.h>

void selectionsort(int arr[],int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[k])	k=j;
		}
		int t=arr[k];
		arr[k]=arr[i];
		arr[i]=t;
	}
}

int main()
{
	int a;
	int arr[]={21,56,7,18,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted array:\n");
	for(a=0;a<size;a++) printf("%d ",arr[a]);
	selectionsort(arr,size);
	printf("\nSorted array:\n");
	for(a=0;a<size;a++) printf("%d ",arr[a]);
	printf("\n");
}
