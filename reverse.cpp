#include<stdio.h>
int main()
{
	int n,rev=0,rem,temp;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;	
	}
	printf("rev num is %d :",rev);
	
}
