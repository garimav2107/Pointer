#include<stdio.h>
#include<string.h>
int name(char *aptr,char *bptr)
{
	int i=0,j=0,q;
	char c[100],*cptr,a[100],b[100];
	cptr=&c[0];
	printf("aptr=%p\nbptr=%p\ncptr=%p\n",aptr,bptr,cptr);
	printf("aptr=%s bptr=%s\n",aptr,bptr);
	while(*aptr!='\0')
	{
		*cptr=*aptr;
		//printf("%p\n",cptr);
		cptr++;
		aptr++;
		j++;
	}
	c[j]=0x20;
	cptr=&c[j+1];
	while(*bptr!='\0')
	{
		*cptr=*bptr;
		//printf("%p\n",cptr);
		cptr++;
		bptr++;
	}
	cptr=&c[0];
	printf("after murge \n");
	//for(i=0;c[i]!='\0';i++)
	{
		printf("%s",c);
		//printf("%p",cptr);
		//cptr++;
	}
	return *aptr;


}
int main()
{
	int i=0;
	char a[100],*ptr1,b[100],*ptr2;
	ptr1=&a[0];
	ptr2=&b[0];
	printf("enter 1st string=");
	scanf("%s",ptr1);
	printf("enter 2nd string=");
	scanf("%s",ptr2);
	printf("a=%p\n",ptr1);
	printf("b=%p\n",ptr2);
	name(ptr1,ptr2);
	return 0;
}


