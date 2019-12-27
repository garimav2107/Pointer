#include<stdio.h>
int main()
{
	int a=5,*aptr;
	char b='a',*bptr;
	aptr=&a;
	bptr=&b;
	printf("value a=%d b=%c\n",a,b);
	printf("adress of &a=%p &b=%p\n",&a,&b);
	printf("adress of aptr=%p bptr=%p\n",aptr,bptr);
	printf("adress of &aptr=%p &bptr=%p\n",&aptr,&bptr);
	printf("value of *aptr=%d *bptr=%c\n",*aptr,*bptr);
	return 0;
}


