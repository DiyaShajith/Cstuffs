#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter the principal amount : ");
	scanf("%f",&p);
	printf("Enter the rate of interest : ");
	scanf("%f",&r);
	printf("Enter the total period : ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest is %f",si);
	return 0;
}