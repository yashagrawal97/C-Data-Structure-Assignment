//program to find length of given string

#include<stdio.h>
int stringLen(char *string)
{
 for(int i=0; i<=100;i++)
 {
  if(*(string+i)=='\0')
  {
   return i;
  }
 }
 return 0;
}

int main()
{
 // UM: move the code to funtion int stringLen(char * string);
 int n;
 char s[100];
 printf("Enter the string\n\n");
 scanf("%s",s);
 printf("The entered string is: %s\n\n",s);

 n=stringLen(&s[0]);
 printf("The length of entered string is : %d\n\n",n);
 return 0;

}
