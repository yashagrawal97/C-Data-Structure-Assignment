#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int i,j;
 printf("Enter size:\n");
 scanf("%d",&i);
 char *p;
 p =(char *) malloc(i*sizeof(char));
 if(p==0) printf("\nERROR\n");
 strcpy(p,"hey");
 for(j=0;j<=i;j++)
 {
  if(j!=i && *(p+j)=='\0')
  {
   *(p+j)='l';
  }
 }
 printf("%s",p);
}
