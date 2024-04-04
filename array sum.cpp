#include<stdio.h>
int main()
{
	int marks[6]={10,5,8,25,30,66};
	int sum=0;
	for(int i=0;i<6;i++)
	{
		sum=sum+marks[i];
	}
	printf("sum is %d\t",sum);
}
