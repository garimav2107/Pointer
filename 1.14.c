#include<stdio.h>
int main()
{
	int i,n,*ptr;
	int a[100];
	printf("enter no of element=\n");
	scanf("%d",&n);
	printf("enter no=\n");
	ptr=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
		printf("%d",*ptr);
	}
	return 0;
}

