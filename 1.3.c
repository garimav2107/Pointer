#include<stdio.h>
int main()
{
	int i;
	char a[100],*ptr;
	ptr=&a[0];
	printf("enter your name=");
	scanf("%s",ptr);
	for(i=0;a[i]!='\0';i++)
	{
		printf("a[%d]=%c adr=%p\n",i,*ptr,ptr);
		ptr++;
	}
	printf("&ptr=%p\n",&ptr);
	return 0;
}
