#include<stdio.h>
int main()
{
	char c;
	int lower,upper;
	printf("Enter an alphabet : ");
	scanf("%c",&c);
	lower = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	upper = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(lower || upper)
		printf("%c is vowel \n",c);
	else
		printf("%c is not vowel ",c);
	return 0;
}
