// program to calculate factorial of input

#include<stdio.h>
#include<math.h>

int factorial(int x)
{
	int f=x;
	if(x==1) return 1;
	while(x>>1)
	{
		x--;
		f= f*x;
	}
	return f;
}

int main()
{
	int n;
	printf("Enter the number:\n\n");
	scanf("%d",&n);
	printf("The factorial of %d is:\t%d\n\n",n,factorial(n));
	return 0;	
}
