#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="Hello World";
	int i=0,count=0;
	while(i<11)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("vowels are %d",count);
}
