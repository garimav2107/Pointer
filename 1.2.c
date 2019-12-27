#include<stdio.h>
int main()
{
	int i,j,*ptr;
	int a[5];
	ptr=&a[0];
	printf("enter array value=\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr);
		printf("%p\n",ptr);
		ptr++;
	}
	ptr=&a[0];
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d addre=%p\n",i,*ptr,ptr);
		printf("pp=%p\n",ptr);
		ptr++;
	}
	printf("&ptr=%p",&ptr);
	return 0;
}

