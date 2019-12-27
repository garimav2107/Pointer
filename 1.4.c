#include<stdio.h>
int main()
{
	int sum,multi,div,subt,a,b,*aptr,*bptr;
	aptr=&a;
	bptr=&b;
	printf("enter 1st value=");
	scanf("%d",aptr);
	printf("enter 2nd value=");
	scanf("%d",bptr);
	sum=*aptr+*bptr;
	subt=*aptr-*bptr;
	multi=(*aptr)*(*bptr);
	div=(*aptr)/(*bptr);
	printf("a=%d a=%p\n",a,aptr);
	printf("b=%d b=%p\n",b,bptr);
	printf("sum=%d sum=%p\n",sum,&sum);
	printf("subt=%d subt=%p\n",subt,&subt);
	printf("multi=%d multi=%p\n",multi,&multi);
	printf("div=%d div=%p\n",div,&div);
	return 0;
}



