//program to capitalize given string

#include<stdio.h>
int main()
{
 // UM: No need to hard code to 20.
 // UM: Lenth is automatically allocated based on characters
 // UM: '\0' special character which is present at the end. Also known as string terminator.
 // char s[20]="Hello there people";
 
 // UM: TODO  add the code to a method called void toUpper(char *p)
 char s[]="Hello there people";

 // Look for the string terminator char.
 for(int i=0; s[i] != '\0';i++)
 {
	if(s[i]<=122 && s[i]>=95) s[i]= s[i]-32;
 }
 printf("The capitalised string is : %s\n\n",s);
 return 0;
}
