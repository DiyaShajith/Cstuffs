#include<stdio.h>
int main()
{
	float l,b,area,perimeter;
	printf("Enter the length : ");
	scanf("%f",&l);
	printf("Enter the breadth : ");
	scanf("%f",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("Area of rectangle is : %f \n",area);
	printf("perimeter of rectangle is : %f",perimeter);
	return 0;
}
