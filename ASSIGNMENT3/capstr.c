//program to capitalize given string

#include<stdio.h>

void toUpper(char *p)
{
 for(int i=0; *(p+i) != '\0';i++)
  {
   if(*(p+i)<=122 && *(p+i)>=95) *(p+i)= *(p+i)-32;
  }
}

int main()
{
 // UM: No need to hard code to 20.
 // UM: Lenth is automatically allocated based on characters
 // UM: '\0' special character which is present at the end. Also known as string terminator.
 // char s[20]="Hello there people";
 
 // UM: TODO  add the code to a method called void toUpper(char *p)

 char s[]="Hello there people";

 // Look for the string terminator char.
 toUpper(&s[0]);
 printf("The capitalised string is : %s\n\n",s);
 return 0;
}
