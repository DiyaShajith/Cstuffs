#include<stdio.h>
int main()
{
	int n,r,sum=0,z;
	printf("Enter the number : ");
	scanf("%d",&n);
	z=n;
	while(n>0)
	{
	 r=n%10;
	 sum=sum+(r*r*r);
	 n=n/10;
	}
	if(z==sum)
	{
		printf("Number is armstrong \n");
	}
	else
	{
		printf("Number is not armstrong");
	}
	
}
