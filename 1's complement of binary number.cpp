// Program to find out 1's complement of binary number using nesting of member functions in OOP.
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class binary
{
	private:
		string s;
	public:
		void readnumber(void)
		{
			cout<<"enter the binary number :";
			cin>>s;
		}
		void checknumber(void)
		{
			int i;
			for(i=0;i<s.length();i++)
			{
				if(s.at(i)!='0' && s.at(i)!='1')
				{
					cout<<"\n entered number is not binary number format...the program will be quiet";
					getch();
					exit(0);
				}
			}
		}
		void complement(void)	// steps to complement the given number using 1's complement.
		{
			int i;
			checknumber();
			for(int i=0;i<s.length();i++)
			{
				if(s.at(i)=='0')
				{
					s.at(i)='1';
				}
				else
				{
					s.at(i)='0';
				}
				
			}
		}
		void displaycomp(void)	//display the number which is complemented using 1's complement.
		{
			complement();
			cout<<"\nthe 1'complement of given number is :";
			cout<<s;
		}
		
};

int main()
{
	binary b;
	b.readnumber();
	b.displaycomp();
	getch();
	return 0;
}

