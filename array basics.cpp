#include<stdio.h>
int main()
{
	int arr[5]={5,7,10,20,45};
	printf("%d\n",arr[0]);
	arr[0]=25;
	printf("%d\n",arr[0]);
	for(int i=0;i<5;i++)
	printf("%d\t",arr[i]);
}
