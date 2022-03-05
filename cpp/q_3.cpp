//By: Vandit Prajapati
//C++ Assignment Q-3
//Piggie Bank Code

#include<iostream>
using namespace std;

class AddAmount
{
	public:
		int amount=50; //Initial Amount is 50
			
		//Default Constructor for intializing amount with 50		
		AddAmount()
		{
			amount=50;
		}
		
		//Parameterized Constructor for providing the amount to be added to piggie bank
		AddAmount(int amt)
		{
			amount=amount+amt;
		}
		
		//Function for displaying final amount
		void display()
		{
			cout<<"Final Amount: "<<amount<<endl;
		}
};

int main()
{
	int am;
	cout<<"Enter the amount to be added in piggie bank: ";
	cin>>am;
	AddAmount a(am);	
	a.display();
}
