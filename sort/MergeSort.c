#include<stdio.h>

void merge(int arr[], int l, int m, int r)
{
 int i,j,k;
 int a = m-l+1;
 int b = r-m;
 
 int left[a], right[b];

 for(i=0;i<a;i++) left[i] = arr[l+i];
 for(j=0;j<b;j++) right[j]= arr[m+1+j];

 i=0;
 j=0;
 k=l;
 while(i<a && j<b)
 {
  if(left[i]<=right[j])
  {
   arr[k]=left[i];
   i++;
  }
  else
  {
   arr[k]=right[j];
   j++;
  }
  k++;
 }

 while(i<a)
 {
  arr[k]=left[i];
  i++;
  k++;
 }

 while(j<b)
 {
  arr[k]=right[j];
  j++;
  k++;
 }
}

void sort(int arr[], int l, int r)
{
 if(l<r)
 {
  int m= l+(r-l)/2;
  sort(arr,l,m);
  sort(arr,m+1,r);

  merge(arr,l,m,r);
 }
 else return;
}


int main()
{
 int p,arr[]={15,7,63,5,19};
 int size= sizeof(arr)/sizeof(arr[0]);
 
 printf("Unsorted array:\n");
 for(p=0;p<size;p++) printf("%d ",arr[p]);

 sort(arr,0,size-1);

 printf("\n\nAfter sorting, the array is:\n");
 for(p=0;p<size;p++) printf("%d ",arr[p]);
 printf("\n");
 return 0;
}
