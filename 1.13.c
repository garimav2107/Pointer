#include<stdio.h>
int sub(int *aptr,int d)
{
	int c,*cptr;
	cptr=&c;
	*cptr=(*aptr-d);
	//printf("%d\n",*cptr);
	printf("aptr=%p\n",aptr);
	printf("&d=%p\n",&d);
	printf("cptr=%p\n",cptr);
	return *cptr;
}
int main()
{
	int a,*ptr1,b,x;
	ptr1=&a;
	printf("enter 1st value=");
	scanf("%d",ptr1);
	printf("enter 2nd value=");
	scanf("%d",&b);
	printf("&a=%p\n",&a);
	printf("&ptr=%p\n",&ptr1);
	printf("&b=%p\n",&b);
	x=sub(ptr1,b);
	printf("sub=%d\n&sub=%p\n",x,&x);
	return 0;
}
