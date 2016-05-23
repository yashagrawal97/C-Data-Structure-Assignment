/*Program to compute product of two 2-d matrices
1	2	and	1	3
3	4		2	4	*/

#include<stdio.h>

int multiply(int a[2][2], int b[2][2])
{
	int p[2][2]={{0,0},{0,0}};
	int s=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			p[i][j]=s;
			s=0;
		}
	}
	printf("The product is:\n\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int x[2][2]={{1,2},{3,4}};
	int y[2][2]={{1,3},{2,4}};
	multiply(x,y);
	printf("\n");
}
