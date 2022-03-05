//By: Vandit Prajapati
//C-Programming Assignment Q-3
//Search and Sequence

#include<stdio.h>
int main()
{
	int ele,flag=0,a[10]={1,5,4,8,9,2,0,6,11,7};
	printf("Enter the element to be searched in array: ");
	scanf("%d",&ele);
	//For searching the element in the array
	for(int i=0;i<10;i++)
	{
		if(a[i]==ele)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	//Printing the sequence of array elements
	for(int i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
