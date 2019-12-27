#include<stdio.h>
int main()
{
	int i,j;
	char a[100],*bptr,b[100],*aptr;
	aptr=&a[0];
	bptr=&b[0];
	printf("enter your name=");
	scanf("%s",aptr);
	for(i=0;a[i]!='\0';i++)
	{
		*bptr=*aptr;
		printf("%c",*bptr);
		aptr++;
		bptr++;
	}

	printf("aptr=%p bptr=%p",aptr,bptr);
	return 0;
}
		


	
