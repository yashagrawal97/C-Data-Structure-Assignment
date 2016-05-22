//program to find length of given string

#include<stdio.h>
int main()
{
 // UM: move the code to funtion int stringLen(char * string);
 char s[20];
 printf("Enter the string\n\n");
 scanf("%s",s);
 printf("The entered string is: %s\n\n",s);
 for(int i=0; i<=20;i++)
 {
  if(s[i]=='\0')
  {
   printf("The length of entered string is : %d\n\n",i);
   return 0;
  }
 }
}
