#include<stdio.h>
int main()
{
	int a[6]={10,20,30,40,50,60};
	int max=0;
	for(int i=0;i<6;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	printf("maximum is %d",max);
}
	
