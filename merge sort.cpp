#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int mid;
	int low=0,high=n-1;
	int result=-1;
	int key=5;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(arr[mid]==key)
		{
			result=mid;
			break;
		}
		if(arr[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(result==-1)
	{
		printf("item not found \n");
	}
	else
	{
		printf("item found %d",mid);
	}
}

