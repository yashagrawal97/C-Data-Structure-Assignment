//Program to print name of day for any date between 2000 and 2030

#include<stdio.h>
char dayname[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int leap(int y)
{
 if(y%4==0) return 29;
 return 28;
}

int count(int yy,int dd,int mm)
{
 int x=leap(yy);
 int numberdays[12]={31,x,31,30,31,30,31,31,30,31,30,31};
 int b=0;
 for(int m=1;m<=mm;m++)
 {
  if(m==mm) b=b+dd;
  else b=b+numberdays[m-1];
 }
 return b;							//b is the number of days spent in current year
}

int main()
{
 int dd,mm,yy;
 printf("Enter the date month and year between 2000 and 2030:\n\n");
 scanf("%d%d%d",&dd,&mm,&yy);
 int day;							//This will vary from 0 to 6 for Monday to Sunday
 int firstday=5;						//setting jan 1,2000 as Saturday
 int a=0;
 for(int y=2000;y<yy;y++)
 {
   if(y%4==0) a=a+366;
   else a=a+365;
 }

 a=a+count(yy,dd,mm);

 day=a%7-1;
 day=day+firstday;						//jan 1,2000 is saturday and all days are counted with respect to it
 if(day>7) day=day-7;						//as day lies between 0 and 6 corresponding to array dayname[7][10] 
 printf("The day on date %d:%d:%d is-\n%s\n\n",dd,mm,yy,dayname[day]);
}
