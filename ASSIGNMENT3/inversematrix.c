//Program to determine inverse of any given 3*3 matrix

#include<stdio.h>
float n[3][3]= {{7,-3,-3},
		{-1,1,0},
		{-1,0,1}};
float a[3][3]= {{1,0,0},
		{0,1,0},
		{0,0,1}};

void makezero(float n[3][3],float a[3][3],int e,int f,int o)
{
 for(int i=0;i<3;i++)
 {
  n[e][i]-=o*n[f][i];
  a[e][i]-=o*a[f][i];
 }
}

void inverse(float n[3][3],float a[3][3])		//n is original matrix and a is identity matrix
{
 int i,j;
 int p=(n[0][0]-1)/n[1][0];			//factor to multiply row2 and subtract from row1...
 for(j=0;j<3;j++)				//to make [0][0]=1
 {
  n[0][j]= n[0][j]-p*n[1][j];
  a[0][j]= a[0][j]-p*a[1][j];
 }

 int q=n[1][0]/n[2][0];				//to make [1][0]=0
 makezero(n,a,1,2,q);
 	int r=n[2][0]/n[0][0];			//to make [2][0]=0
	makezero(n,a,2,0,r);
 int s=n[2][1]/n[1][1];				//to make [2][1]=0
 makezero(n,a,2,1,s);
 	int t=n[0][1]/n[1][1];			//to make [0][1]=0
	makezero(n,a,0,1,t);
 int u=n[0][2]/n[2][2];				//to make [0][2]=0
 makezero(n,a,0,2,u);
 	int v=n[1][2]/n[2][2];			//to make [1][2]=0
	makezero(n,a,1,2,v);
 
 a[1][1]=a[1][1]/n[1][1];			//to make a[1][1]=1
 a[2][2]=a[2][2]/n[2][2];			//to make a[2][2]=1
 	n[1][1]=1;				//to make n[1][1]=1
 	n[2][2]=1;				//to make n[2][2]=1
 
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%.2f\t",a[i][j]);			//printing inverse converted from identity matrix
  }
  printf("\n");
 }
}

int main()
{
 printf("Inverse of:\n");
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++) printf("%.2f\t",n[i][j]);
  printf("\n");
 }
 printf("\nis:\n");

 inverse(n,a);
}
