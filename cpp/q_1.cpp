//By: Vandit Prajapati
//C++ Assignment Q-1
//Displaying information of salary and working hours for given employee

#include<iostream>
using namespace std;

//Creating class employee
class employee
{
	public:
		int salary,number_hour;
		
		//Function for obtaining the salary and working hours of employee
		void get_info(int s, int n)
		{
			salary=s;
			number_hour=n;
		}
		
		//Function for adding salary if the salary of given employee is less than 500	
		int addsal()
		{
			if(salary<500)
			{
				salary=salary+10;
			}
		}
		
		//Function for adding salary if the number of working hours of given employee is more than 6 
		int addwork()
		{
			if(number_hour>6)
			{
				salary=salary+5;
			}
		}
		
		//Function for displaying final salary of employee
		void disp_salary()
		{
			printf("Salary is: %d\n",salary);
		}
};

int main()
{
	employee e;
	int s, n;
	cout<<"Enter the salary of employee: ";
	cin>>s;
	cout<<"Enter the number of working hours of employee: ";
	cin>>n;
	e.get_info(s,n);
	e.addsal();
	e.addwork();
	e.disp_salary();
} 
