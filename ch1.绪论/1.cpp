#include<stdio.h>
int main()
{
	void exchange(int *p1,int *p2,int *p3);
	int a,b,c,*pointer1,*pointer2,*pointer3;
	scanf("%d%d%d",&a,&b,&c);
	pointer1=&a;pointer2=&b;pointer3=&c;
	exchange(pointer1,pointer2,pointer3);
	printf("%d\n%d\n%d\n",*pointer1,*pointer2,*pointer3);
	return 0;
 } 
void exchange(int *p1,int *p2,int *p3)
{
	void swap(int *p,int *q);
	if(*p1>*p2)	swap(p1,p2);
	if(*p1>*p3)	swap(p1,p3);
	if(*p2>*p3)	swap(p2,p3);
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}