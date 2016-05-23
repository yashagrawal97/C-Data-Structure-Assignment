//program to check whether given string is a palindrome

#include<stdio.h>
#include<string.h>
int main()
{
// write a function "bool isPalindrome(char* inputString);"
	int n;
	char x[20];
	printf("Enter string:\n\n");
	scanf("%s",x);
	n= strlen(x);
	n--;
	// UM: Always use string terminator char '\0'
	for(int i=0;x[i]!='\0';i++)
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
