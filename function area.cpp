#include<stdio.h>
float area(float length,float width)
{
	return length*width;
}
int main()
{
	float l,b,result;
	printf("Enter the length : \n");
	scanf("%f",&l);
	printf("Enter the width : \n");
	scanf("%f",&b);
	result=area(l,b);
	printf("The area is %f : \n ",result);
}
