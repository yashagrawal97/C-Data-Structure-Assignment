#include<stdio.h>
int main()
{
 int dd,mm,yy,x=1;
 printf("Enter the date month and year between 2000 and 2030:\n\n");
 scanf("%d%d%d",&dd,&mm,&yy);
 if(dd>31||dd<1) x=0;
 if(mm>12||mm<1) x=0;
 if(yy>2030||yy<2000) x=0;
 if(mm==2 && dd>29) x=0;
 if(m==2 && dd>=29 && yy%4!=0) x=0;
 if(m==2 && dd>29 && yy%4==0) x=0;
}
