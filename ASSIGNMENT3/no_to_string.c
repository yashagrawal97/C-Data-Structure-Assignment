//program to display the number entered in word form

#include<stdio.h>
#include<string.h>
char words[3][10][10]={{"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"},
			{"Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"},
			{"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"}};

char ONES[10],TENS[10],HUND[10],HUND2[10],THOUS[10],THOUS2[10],TENK[10];
							// HUND2 and THOUS2 are to store the words "Hundred" and "Thousand"
int check(int n)					// to check if entered number is valid
{
 if(n<0 || n>99999)
 {
  printf("Please enter a number between 0 and 99999 only\n\n");
  return 0;
 }
 return 1;
}

	void teens(int y, char p[10])			// for when the number has "eleven, twelve, thirteen, fourteen..."
        {
         if(y==0) strcpy(p,words[1][0]);	//y=digit at ones or thousands place & p[] is the array for tens or ten thousands
         else strcpy(p,words[2][y-1]);
        }

void onesplace(int O)
{
 if(O==0) strcpy(ONES,"\0");
 else strcpy(ONES,words[0][O-1]);
}
	void tensplace(int t,int o)			//t=digit at tens place & o=digit at ones place
	{
	 if(t==0) strcpy(TENS,"\0");
	 if(t==1) teens(o,TENS);
	 if(t!=0 && t!=1) strcpy(TENS,words[1][t-1]);
	}
void hundplace(int h)
{
 if(h==0)
 {
  strcpy(HUND,"\0");
  strcpy(HUND2,"\0");
 }
 else 
 {
  strcpy(HUND,words[0][h-1]);
  strcpy(HUND2,"Hundred");
 }
}
	void thousplace(int T,int T2)		//T=digit at thousands place and T2=digit at ten thousands place
	{
	 if(T==0)
	 {
	  strcpy(THOUS,"\0");
	  strcpy(THOUS2,"\0");
	 }
	 else if(T2!=1)
	 {
	  strcpy(THOUS,words[0][T-1]);
	  strcpy(THOUS2,"Thousand");
	 }
	}
void tenkplace(int q,int r)			// q=digit at tenk place and r=digit at thousands place
{
 if(q==1)
 {
  teens(r,TENK);				// for ten,eleven,twelve,thirteen.... thousands
  strcpy(THOUS2,"Thousand");
  return;
 }
 if(q==0) return;
 if(q>1)
 {
  strcpy(TENK,words[1][q-1]);
 }
}

int main()
{
 int m,n, ones,tens,hund,thous,tenk;
 printf("Enter the number:\n\n");
 scanf("%d",&n);
 if (check(n)==0) main();
 if(n==0)
 {
 printf("The number you entered was:\nZero\n\n");
 return 0;
 }
 
 m=n;
 ones=m%10;
 	m=m/10;
 	tens=m%10;
 m=m/10;
 hund=m%10;
 	m=m/10;
	thous=m%10;
 tenk=m/10;
 
 onesplace(ones);
 tensplace(tens,ones);
 hundplace(hund);
 thousplace(thous,tenk);
 tenkplace(tenk,thous);
 if(tens==1)
 {
  teens(ones,TENS);
  strcpy(ONES,"\0");
 }
 printf("The number you entered was:\n%s %s %s %s %s %s %s\n\n",TENK,THOUS,THOUS2,HUND,HUND2,TENS,ONES);
}
