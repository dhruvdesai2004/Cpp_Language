/*
1. WAP to create a Message class with a constructor that takes a single string with a default value. 
Create a private member string, and in the constructor simply assign the argument string to your internal string. 
Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, 
and one that takes a string argument, which it prints in addition to the internal message.
*/

#include<iostream>
using namespace std ;

class A{
	
	string s1="hello C plus language" ;
	
	public :
		
		A()
		{
			cout<<s1<<endl ;			
		}
		
		A(string s2)
		{
			cout<<s1<<endl;
			cout<<s2<<endl;
		}
};

main()
{
	string s;
	
	cout<<"\nEnter String : "; 
	cin>>s;
	cout<<endl;
	A m ;
	A m2(s);
}
