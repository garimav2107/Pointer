#include<stdio.h>
int main()
{
	int a,b,c,p,*aptr,*bptr,*cptr;
	aptr=&a;
	bptr=&b;
	printf("enter 1st value=");
	scanf("%d",aptr);
	printf("enter 2nd value=");
	scanf("%d",bptr);
	printf("a=%d a=%p b=%d b=%p\n",a,aptr,b,bptr);
	p=*aptr;
	*aptr=*bptr;
	*bptr=p;
	printf("after swap\n a=%d a=%p,b=%d b=%p",a,aptr,b,bptr);
	return 0;
}

