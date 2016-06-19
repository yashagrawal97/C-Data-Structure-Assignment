//Program to print name of day for any date between 2000 and 2030

#include<stdio.h>
int leap(int y)
{
 if(y%4==0) return 29;
 return 28;
}

int count(int dd,int mm,int yy)
{
 int x=leap(yy);
 int numberdays[12]={31,x,31,30,31,30,31,31,30,31,30,31};
 int b=0;
 for(int m=1;m<=mm;m++)
 {
  if(m==mm) b=b+dd;
  else b=b+numberdays[m-1];
 }
 return b;						//b is the number of days spent in current year
}

int display(int dd,int mm,int yy)
{
 int day;							//This will vary from 0 to 6 for Mon to Sun
 int firstday=5;						//Setting Jan 1,2000 as Saturday
 int a=0;
 for(int y=2000;y<yy;y++)
 {
  if(y%4==0) a=a+366;
  else a=a+365;
 }								// 1/1/yy is counted as a day here
 
 a=a+count(dd,mm,yy);						// 1/1/yy is counted as a day here too,ie, counted twice
 day=a%7-1;							// ^ hence 1 is subtracted
 day=day+firstday;						//Jan 1,2000 is Sat and all days are counted corresponding to it
 day=day%7;							//As day lies between 0 & 6 corresponding to array dayname[7][10]
 return day;
}

int main()
{
 int mm,yy;
 printf("Enter the month and year between 2000 and 2030:\n");
 scanf("%d%d",&mm,&yy);
 printf("The calendar for the month is:\n");
 int day;
 int x=leap(yy);
 int numberdays[12]={31,x,31,30,31,30,31,31,30,31,30,31};

 printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
 day=display(1,mm,yy);
 for(int i=0;i<day;i++) printf("\t");
 for(int j=1;j<=numberdays[mm-1];j++)
 {
  day=display(j,mm,yy);
  if(day==6) printf("%d\n",j);
  else printf("%d\t",j);
 }
 printf("\n\n");
}
