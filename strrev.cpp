#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30];
	printf("Enter the string :");
	scanf("%s",str1);
	printf("string reverse is : %s",strrev(str1));
	return 0;
}
