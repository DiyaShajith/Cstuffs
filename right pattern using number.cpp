#include<stdio.h>
int main()
{
	int rows,i,j,pattern;
	printf("Enter the rows and pattern :");
	scanf("%d%d",&rows,&pattern);
	for(i=1;i<=rows;i++)
	{
		for(j=0;j<pattern;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
