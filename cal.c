#include<stdio.h>
int main()
{
	int num1,num2;
	int choice;
	char c;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	do
	{
	printf("press 1 to add %d and %d \n",num1,num2);
	printf("press 2 to subtract %d and %d \n",num1,num2);
	printf("press 3 to multiply %d and %d \n",num1,num2);
	printf("press 4 to divide %d and %d \n",num1,num2);
	printf("Enter your choice \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
			printf("sum is %d \n",num1+num2);
			break;
		case 2:
			printf("sum is %d \n",num1-num2);
			break;
		case 3:
			printf("sum is %d \n",num1*num2);
			break;
		case 4:
			printf("sum is %d \n",num1/num2);
			break;
		default :
			printf("Invalid choice ");
			break;
	}
	printf("Do you want to continue (y/n) : ");
	scanf(" %c",&c);
	}	while(c=='y'||c=='Y');
	
}
