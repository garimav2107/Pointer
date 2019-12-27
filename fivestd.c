#include<stdio.h>
int main()
{
	char name[5][5],ge[5][5],*nptr,*geptr;
	int age[5],n,i,j,*ageptr,p,q;
	long int mo[5],*moptr;
	j=0;
	printf("enter no of student=");
	scanf("%d",&n);
	nptr=&name[0][0];
        geptr=&ge[0][0];
        ageptr=&age[0];
        moptr=&mo[0];
	for(i=0;i<n;i++)
	{
		printf("[%d]name=",i);
		scanf("%s",&name[i][j]);
		nptr++;
		printf("gender=");
		scanf("%s",&ge[i][j]);
                geptr++;
		printf("mo no=");
		scanf("%ld",&mo[i]);
		moptr++;
		printf("age=");
		scanf("%d",&age[i]);
		ageptr++;
	}
	nptr=&name[0][0];
	geptr=&ge[0][0];
	ageptr=&age[0];
	moptr=&mo[0];
	for(i=0;i<n;i++)
	{
		printf("[%d]%s\t%p\n",i,&name[i][j],&name[i][j]);
           	nptr++;
		printf("%s\t%p\n",&ge[i][j],&ge[i][j]);
                geptr++;
		printf("%ld\t%p\n",mo[i],&mo[i]);
		moptr++;
		printf("%d\t%p\n",age[i],&age[i]);
                ageptr++;
		//printf("\n");
	}
	return 0;
}
