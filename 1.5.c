#include<stdio.h>
int main()
{
	int i,j,x,*ptr,n,sum=0;
	float avg;
	int a[100];
	printf("enter no of element=");
	scanf("%d",&n);
	printf("enter values=");
	ptr=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&a[0];
	for(i=0;i<n;i++)
	{
		sum=sum+(*ptr);
		printf("a[%d]=%p\n",i,ptr);
		ptr++;
	}
	avg=sum/n;
	printf("avg=%f\n",avg);
	printf("ptr=%p",&ptr);
	return 0;
}
