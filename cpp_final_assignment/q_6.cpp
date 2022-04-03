//By: Vandit Prajapati
//CPP Assignment Q-6
//Student Grade Report

#include<iostream>
using namespace std;

class student
{
	public:
		int attendance;
		float test_score;
		int total_score;
		int result;
		
		void getdata()
		{
			cout<<"Enter the attendance: ";
			cin>>attendance;
			cout<<"Enter the Test Score: ";
			cin>>test_score;
			cout<<"Enter the Total Score: ";
			cin>>total_score;
		}
		
		void disp_grade()
		{
			if(attendance>50 && test_score>0.7 && total_score>5600)
			{
				result=10;
				cout<<"res: "<<result<<endl<<endl;
			}
			else if(attendance>50 && test_score>0.7)
			{
				result=9;
				cout<<"res: "<<result<<endl<<endl;
			}
			else if(test_score>0.7 && total_score>5600)
			{
				result=8;
				cout<<"res: "<<result<<endl<<endl;
			}
			else if(attendance>50 && total_score>5600)
			{
				result=7;
				cout<<"res: "<<result<<endl<<endl;
			}
			else if(((attendance>50 && !(test_score>0.7) && !(total_score>5600)) || (!(attendance>50) && !(test_score>0.7) && total_score>5600) || (!(attendance>50) && test_score>0.7 &&  !(total_score>5600))))
			{
				result=6;
				cout<<"res: "<<result<<endl<<endl;
			}
			else
			{
				result=5;
				cout<<"res: "<<result<<endl<<endl;
			}
		}
};


int main()
{	
	int n;
	cout<<"Enter the number of students: "<<endl;
	cin>>n;
	
	student s[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the details of student "<<i+1<<" :"<<endl;
		s[i].getdata();
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"Grade of student "<<i+1<<" :"<<endl;
		s[i].disp_grade();
	}	
}
