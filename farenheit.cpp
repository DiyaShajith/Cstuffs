#include<stdio.h>
int main()
{
	float fare,cel;
	printf("Enter the farenheit : ");
	scanf("%f",&fare);
	cel=(fare-32)*5/9;
	printf("farenheit is %f ",cel);
	return 0;
}
