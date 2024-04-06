#include<stdio.h>
int main()
{
	int n,temp;
	int ar[100];
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	printf("Input %d elements in the array \n",n);
	for(int i=0;i<n;i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&ar[i]);
	}	
	for(int i=0;i<n;i++)
	{
	for(int j=i+1;j<n;j++)
	{
		if(ar[j]<ar[i])	
		{
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	}
	}
	printf("elements are sorted in ascending order : ");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
	}
	printf("\n\n");
}
