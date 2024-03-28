#include<stdio.h>
int main()
{
	int mark;
	printf("Enter the mark : ");
	scanf("%d",&mark);
	if(mark>85&&mark<=100)
	{
		printf("student got A+");
	}
	else if(mark>75&&mark<=85)
	{
		printf("student got B+");
	}
	else if (mark>65&&mark<=75)
	{
		printf("student got C+");
	}
	else if(mark>55&&mark<=65)
	{
		printf("student got D+");
	}
	else
	{
		printf("FAILED");
	}
}
