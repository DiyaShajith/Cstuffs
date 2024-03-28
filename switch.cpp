#include<stdio.h>
int main()
{
	char op;
	int num1,num2;
	printf("Enter the operator (+,-,*,/) : ");
	scanf(" %c",&op);
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	switch(op)
	{
		case '+': 
		printf("sum is %d",num1+num2);
		break;
		case '-': 
		printf("sum is %d",num1-num2);
		break;
		case '*': 
		printf("sum is %d",num1*num2);
		break;
		case '/': 
		printf("sum is %d",num1/num2);
		break;
		default: 
		printf("invalid operator \n");
		break;
				   
	}
}
