#include<stdio.h>
char char_pointer(char *aptr)
{
	int i,j=0;
	char a[100];
	for(i=0;a[i]!='\0';i++)
	{
		printf("%x aptr=%p\n",*aptr,aptr);
		printf("&aptr=%p\n",&aptr);
		aptr++;
	}
}
int main()
{
	int a,*ptr;
	ptr=&a;
	printf("enter value in hexadecimal=");
	scanf("%x",ptr);
	char_pointer((char*)ptr);
	printf("&a=%p",ptr);
	return 0;
}

