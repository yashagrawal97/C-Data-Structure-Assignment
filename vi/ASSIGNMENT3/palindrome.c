#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char x[20];
	printf("Enter string:\n\n");
	scanf("%s",x);
	n= strlen(x);
	n--;
	for(int i=0;i<=n;i++)
	{
		if(x[i]!=x[n-i])
		{
			printf("Entered string is not a palindrome.\n");
			return 0;
		}
	}
	printf("Entered string is a palindrome.\n");
	return 0;
}
