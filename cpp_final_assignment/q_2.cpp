#include<iostream>
#include<string>
using namespace std;

class charInput
{
	public:
		string s;
	
		void add(char c)
		{
			s=s+c;
		}
		
		std::string getValue() 
		{
			return s; 
		}
};

class numInput : public charInput 
{ 
	public:
		
		void add(char c)
		{
			if(c>='0' && c<='9')
			{
				s=s+c;
			}
		}

};


int main()
{
	numInput* inputN = new numInput();
	inputN->add('1');
	inputN->add('a');
	inputN->add('0');
	cout<<inputN->getValue()<<endl;
	// the output should be 10
}
