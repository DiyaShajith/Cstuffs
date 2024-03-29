#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int choice;
	do
	{
		printf("Enter the choice : \n1.Print Hai\n2.Print Hello\n3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Hai \n");
					break;
			case 2: printf("Hello \n");
					break;
			case 3: exit(0);
					break;
			default: printf("invalid choice");
					break;
					
		}
		printf("Do you want to contine : (y/n)");
		scanf(" %c",&c);		
	}while(c=='y'||c=='Y');
}
