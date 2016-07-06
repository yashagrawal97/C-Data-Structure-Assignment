#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i=10,n;
 char * x;

 x= (char*) malloc(i+1);
 
 for(n=0;n<i;n++) 	x[n]='a'+n;
 
 x[i]='\0';

 printf("String is:\n%s\n",x);
 free(x);
}
