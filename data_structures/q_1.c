//By: Vandit Prajapati
//Data Structure Assignment Q-1
//Merge Two Sorted Arrays

#include<stdio.h>

int main()
{
	int m,n;
	printf("Enter the size of X array: ");
	scanf("%d",&m);
	printf("Enter the size of Y array: ");
	scanf("%d",&n);
	
	//Declaring the array X and Y
	//Declaring array A of size m+n for merging both arrays X and Y and then performing sorting 
	int x[m],y[n],a[m+n],k=0,t;
	
	//Taking input for Array X
	printf("Enter the elements of X array: ");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&x[i]);
		a[k]=x[i];
		k++;
	}
	//Taking input for Array Y
	printf("Enter the elements of Y array: ");
	for(int j=0;j<n;j++)
	{
		scanf("%d",&y[j]);
		a[k]=y[j];
		k++;
	}
	
	//Sorting the merged array A 
	for(int i=0;i<k;i++)
	{
		for(int j=i;j<k;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	//Dividing the array A into X and Y
	k=0;
	for(int i=0;i<m;i++)
	{
		x[i]=a[k];
		k++;	
	}
	
	for(int i=0;i<n;i++)
	{
		y[i]=a[k];
		k++;
	}
	
	printf("\nX:\t");
	for(int i=0;i<m;i++)
	{
		printf("%d\t",x[i]);
	}
	
	printf("\nY:\t");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",y[i]);
	}
	printf("\n");
}
