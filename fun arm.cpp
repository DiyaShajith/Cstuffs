#include<stdio.h>
int isarm(int num)
{
	int r,sum=0,z;
		z=num;
		while(num>0)
	{
	 r=num%10;
	 sum=sum+(r*r*r);
	 num=num/10;
	}
	return z==sum;
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(isarm(n))
	{
		printf("Number is armstrong \n");
	}
	else
	{
		printf("Number is not armstrong");
	}
	
}
