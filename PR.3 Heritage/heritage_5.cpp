/*5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number...*/

#include<iostream>
using namespace std ;

class lol
{
	protected :
	int a ;
	
	public :
		
		geta()
		{
			cout<<"Enter a value : "; cin>>a ;
			cout<<"-----------------------------\n";
		}
};

class square : public lol
{
	public :
		sqr()
		{
			cout<<"The sqaure of "<<a<<" is "<<a*a<<endl;
			cout<<"=============================\n";
		}
};

class cube : public lol
{
		public :
		cb()
		{
			cout<<"The cube of "<<a<<" is "<<a*a*a<<endl;
			
		}
};

main()
{
	square D ; 
	cube M ;
	
	D.geta();
	D.sqr();
	
	M.geta();
	M.cb();
}
