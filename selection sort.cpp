#include<stdio.h>
int main()
{
    int a[]={10,5,25,20,15};
    int n=sizeof(a)/sizeof(a[0]);
    int min;
    for(int i=0;i<n-1;i++)
	 {
        min=i;
        for(int j=i+1;j<n;j++)
		{
            if(a[min]>a[j])
			{
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("Sorted Array: ");
    for(int i=0;i<n;i++) 
	{
        printf(" %d\t", a[i]);
    }
}

