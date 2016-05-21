#include<stdio.h>
int main()
{
 char s[20]="Hello there people";
 for(int i=0;i<20;i++)
 {
	if(s[i]<=122 && s[i]>=95) s[i]= s[i]-32;
 }
 printf("The capitalised string is : %s\n\n",s);
 return 0;
}
