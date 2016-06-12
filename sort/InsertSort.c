#include<stdio.h>

void insertsort(int arr[], int n)
{
 int i,j,k;
 for(i=1;i<n;i++)
 {
  k=arr[i];
  j=i-1;

  while(j>=0 && arr[j]>k)
  {
   arr[j+1]=arr[j];
   j=j-1;;
  }
  arr[j+1]=k;
 // printf("%d",arr[j]);
 }
}

int main()
{
 int a,arr[]={12,11,13,5,6};
 int size= sizeof(arr)/sizeof(arr[0]);
 printf("Unsorted array:\n");
 for(a=0; a<size; a++) printf("%d ",arr[a]);
 
 insertsort(arr,size);
 
 printf("\n\nSorted array:\n");
 for(a=0;a<size;a++) printf("%d ",arr[a]);
 return 0;
}
