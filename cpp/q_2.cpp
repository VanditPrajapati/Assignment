//By: Vandit Prajapati
//C++ Programming Q-2
//Matrix Code

#include<iostream>
#include<vector>
using namespace std;

class matrix
{
	public:
		int rows, columns;
		int ele[10][10];
		
		//Parameterized Constructor
		matrix(int r, int c)
		{
			rows=r;
			columns=c;
		}
		
		//Function for obtaining rows
		int getrow()
		{
			return rows;
		}
		
		//Function for obtaining columns
		int getcolumn()
		{
			return columns;
		}
		
		//Function for setting a value at a position (i,j)
		void setelement(int i, int j)
		{
			int value;
			cout<<"Enter the value: ";
			cin>>value;
			ele[i][j]=value;
		}
		
		//Declaring friend function for performing operations on matrix
		friend matrix operator +(matrix m1, matrix m2);
		friend matrix operator *(matrix m1, matrix m2);
		
		//Function for displaying the elements of matrix
		void display()
		{
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					cout<<ele[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};

//Operator Overloading for performing the addition of matrix
matrix operator + (matrix m1, matrix m2)
{
	matrix m3(m1.rows,m1.columns);
	for(int i=0;i<m1.rows;i++)
	{
		for(int j=0;j<m1.columns;j++)
		{
			m3.ele[i][j] = m1.ele[i][j] + m2.ele[i][j];
		}
	}
	return m3;
}

//Operator Overloading for performing the multiplication of matrix
matrix operator * (matrix m1, matrix m2)
{
	matrix m3(m1.rows,m1.columns);
	for(int i=0;i<m1.rows;i++)
	{
		for(int j=0;j<m1.columns;j++)
		{
			m3.ele[i][j]=0;
			for(int k=0;k<m1.columns;++k)
			{
				m3.ele[i][j] += m1.ele[i][k] * m2.ele[k][j];
			}
		}
	}
	return m3;
}	

int main()
{
	int r,c;
	cout<<"Enter the number of rows: ";
	cin>>r;
	cout<<"Enter the number of columns: ";
	cin>>c;
	
	matrix m1(r,c);
	cout<<"\nEnter the elements of Matrix M1: "<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			m1.setelement(i,j);
		}
	}
	
	matrix m2(r,c);
	cout<<"\nEnter the elements of Matrix M2: "<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			m2.setelement(i,j);
		}
	}
	
	cout<<"\n";
	matrix m3(r,c), m4(r,c);
	cout<<"Addition of matrix: "<<endl;
	m3=m1+m2;
	m3.display();
	cout<<"\nMultiplication of matrix: "<<endl;
	m4=m1*m2;
	m4.display();
}
			
