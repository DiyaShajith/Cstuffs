#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,amount,ci;
	printf("Enter the principal amount : ");
	scanf("%f",&p);
	printf("Enter the rate of interest : ");
	scanf("%f",&r);
	printf("Enter the time period : ");
	scanf("%f",&t);
	amount=p * pow((1+r/100),t);
	ci=amount-p;
	printf("The compound interest is : %f ",ci);
	return 0;
}
