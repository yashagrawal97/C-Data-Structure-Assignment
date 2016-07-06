#include<stdio.h>
#include<stdlib.h>

struct test
{ 
 int data;
 struct test *next;
};


int main()
{
 struct test *head, *curr;
 int i;
 head=NULL;
 
 for(i=10;i>0;i--)
 {
  curr= (struct test*)malloc(sizeof(struct test));
  curr->data = i;
  curr->next = head;
  head = curr;
 }
 curr=head;
 while(curr)
 {
  printf("%d\n",curr->data);
  curr=curr->next;
 }
}
