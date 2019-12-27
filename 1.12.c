#include<stdio.h>
int add(int *aptr,int *bptr)
{
	int c,*cptr;
	cptr=&c;
	*cptr=*aptr+*bptr;
	printf("aptr=%p\n&aptr=%p\n",aptr,&aptr);
	printf("bptr=%p\n&bptr=%p\n",bptr,&bptr);
	printf("cptr=%p\n&cptr=%p\n",cptr,&cptr);
	return *cptr;
}
int main()
{
	int a,b,*ptr1,*ptr2,x;
	ptr1=&a;
	ptr2=&b;
	printf("enter 1st value=");
	scanf("%d",ptr1);
	printf("enter 2nd value=");
	scanf("%d",ptr2);
	printf("&a=%p\n",&a);
	printf("&ptr1=%p\n",&ptr1);
	printf("&b=%p\n",&b);
	printf("&ptr2=%p\n",&ptr2);
	x=add(ptr1,ptr2);
	printf("add=%d\n",x);
	printf("add=%p\n",&x);
	return 0;
}

