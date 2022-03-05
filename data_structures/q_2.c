//By: Vandit Prajapati
//Data Structure Assignment Q-2
//Using queue displaying the binary numbers

#include<stdio.h>

//Front and Rear pointers for insertion and deletion operation
int front=-1,rear=-1; 

//Function for inserting in queue from rear
void insert_queue(int a[], int n, long b)
{
	if(rear==n) //Queue is full
	{
		printf("Queue Overflow\n");
	}
	else
	{
		rear=rear+1;
		a[rear]=b;
	}
}

//Function for deleting element from queue
int delete_queue(int a[])
{
	int ele;
	if(front==rear) //Queue is empty
	{
		printf("Queue Underflow\n");
		return 0;
	}
	else
	{
		front=front+1;
		ele=a[front];
		return ele;
	}
}

//Function for converting decimal number to binary
long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;
    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

//Function for displaying elements in queue
void display(int a[])
{
	for(int i=front+1;i<=rear;i++)
	{
		printf("%d  ",a[i]);
	}
}

int main()
{
	int n,i,rem,t=1;
	long binary=0,b;
	printf("Enter the positive number: ");
	scanf("%d",&n);
	int a[n];
	//Loop for converting the decimal number starting from 1 to binary number and then adding it into queue upto n
	for(i=1;i<=n;i++)
	{
		b=decimalToBinary(i);
		insert_queue(a,n,b);
	}
	display(a);
}
	
