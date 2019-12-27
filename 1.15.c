#include<stdio.h>
int compr(char *aptr,char *bptr)
{
	char a[100],b[100];
	int i=0,j=0;
	/*while(*aptr!='\0')
	{
		aptr++;
		i++;
	}
	while(*bptr!='\0')
	{
		bptr++;
		j++;
	}*/
	printf("&aptr=%p\naptr=%p\n",&aptr,aptr);
	printf("&bptr=%p\nbptr=%p\n",&bptr,bptr);
	while(*aptr!='\0' || *bptr!='\0')
	{
		if(*aptr!=*bptr)
		{
			return 0;
		}
		else
		{
			return 1;
		}
		aptr++;
		bptr++;
	}
}
int main()
{
	int i;
	char a[100],b[100],*ptr1,*ptr2,x;
	ptr1=&a[0];
	ptr2=&b[0];
	printf("enter 1st string=\n");
	scanf("%s",ptr1);
	printf("enter 2nd string=\n");
	scanf("%s",ptr2);
	printf("&a=%p\n&b=%p\n",ptr1,ptr2);
	x=compr(ptr1,ptr2);
	if(x==1)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
	return 0;
}
