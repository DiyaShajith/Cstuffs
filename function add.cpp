#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int num1,num2,result;
	printf("Enter the number : \n");
	scanf("%d%d",&num1,&num2);
	result=add(num1,num2);
	printf("The sum is %d \n",result);
	
}
