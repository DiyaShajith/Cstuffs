#include<stdio.h>
int main()
{
	int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,20,30}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("arr[%d] [%d] is %d \n",i,j,arr[i][j]);
		}
	}
}
