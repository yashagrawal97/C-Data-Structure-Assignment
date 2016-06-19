/* inverse is:
1	3	3
1	4	3
1	3	4
*/

#include<stdio.h>

void makezero(int n[3][3],int a[3][3],int e,int f,int o)
{
 for(int i=0;i<3;i++)
 {
  n[e][i]-=o*n[f][i];
  a[e][i]-=o*a[f][i];
 }
}

void inverse(int n[3][3],int a[3][3])
{
 int j;
 int p=(n[0][0]-1)/n[1][0];			//factor to multiply row2 and subtract form row1...
 for(j=0;j<3;j++)				//to make a[0][0]=1
 {
  n[0][j]= n[0][j]-p*n[1][j];
  a[0][j]= a[0][j]-p*a[1][j];
 }

 int q=n[1][0]/n[2][0];
 makezero(n,a,1,2,q);
 	int r=n[2][0]/n[0][0];
	makezero(n,a,2,0,r);
 int s=n[2][1]/n[1][1];
 makezero(n,a,2,1,s);
 	int t=n[0][1]/n[1][1];
	makezero(n,a,0,1,t);
 int u=n[0][2]/n[2][2];
 makezero(n,a,0,2,u);
 	int v=n[1][2]/n[2][2];
	makezero(n,a,1,2,v);
 
 a[1][1]=a[1][1]/n[1][1];
 a[2][2]=a[2][2]/n[2][2];
 	n[1][1]=1;
 	n[2][2]=1;
 
 for(j=0;j<3;j++)
 {
  for(int i=0;i<3;i++)
  {
   printf("%d\t",a[j][i]);
  }
  printf("\n");
 }
}

int main()
{
 int n[3][3]=	{{7,-3,-3},
 		 {-1,1,0 },
		 {-1,0,1 }}; 
 
 int a[3][3]=   {{1,0,0},
		 {0,1,0},
		 {0,0,1}};
 
 inverse(n,a);

}
