#include<stdio.h>
#include<string.h>
int a=0;
void separate(char *x)
{
	printf("The separated words are:\n\n");
	for(int i=0;;i++)
	{
		if(*(x+i)==' ')
		{
			 printf("\n");
			 separate(&s[i]);
		}
		else printf("%c",*(x+i));
	}
}

int main()
{
	char s[100];
	printf("Enter the string:\n\n");
	scanf("%s",s);
	int l=strlen(s);
	printf("%d",l);
	separate(&s[0]);
}
