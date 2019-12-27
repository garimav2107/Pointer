#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j;
	char a[100],*ptr;
	ptr=&a[0];
	printf("enter the name=");
	scanf("%s",ptr);
	for(i=0;a[i]!='\0';i++)
	{
		if(*ptr=='a' || *ptr=='i' ||*ptr=='o'||*ptr=='u' || *ptr=='e')
		{
			printf("%c ",*ptr);
		}
		ptr++;
	}
	printf("%p",ptr);
	return 0;
}
