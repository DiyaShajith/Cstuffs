#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	printf("Enter the string :");
	scanf("%[^\n]s",&str1);
	printf("upper case is : %s\n",strupr(str1));
	printf("lower case is : %s",strlwr(str1));
	
}
