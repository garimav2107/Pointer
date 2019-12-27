#include<stdio.h>
float avg(int *aptr,int n)
{
	int a[10],sum=0,i;
	float avg;
	printf("aptr=%d aptr= %p &aptr=%p\n",*aptr,aptr,&aptr);
	for(i=0;i<n;i++)
	{
		sum=sum+(*aptr);
		aptr++;
	}
	avg=(float)sum/(float)n;
	//printf("avg=%p\n",&avg);
	return avg;
}
int main()
{
	int a[10],*ptr,x,i;
	float y;
	ptr=&a[0];
	printf("enter no of element=");
	scanf("%d",&x);
	printf("enter no=\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",ptr);
		printf("&a[%d]=%p\n",i,ptr);
		ptr++;
	}
	ptr=&a[0];
	printf("&ptr=%p\n",&ptr);
	y=(avg(ptr,x));
	printf("avg=%f\n&avg=%p",y,&y);
	return 0;
}
