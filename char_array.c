#include<stdio.h>
int char_array(char *aptr)
{
	char a[100];
	int i;
	printf("%p",aptr);
	while(*aptr!='\0')
	{
		printf("*aptr=%c aptr=%p &aptr=%p\n",*aptr,aptr,&aptr);
		aptr++;
	}
}
int main()
{
	char a[100],*ptr;
	ptr=&a[0];
	printf("enter string=");
	scanf("%s",ptr);
	char_array(ptr);
	printf("ptr=%p\n",ptr);
	printf("&ptr=%p\n",&ptr);
	return 0;
}


