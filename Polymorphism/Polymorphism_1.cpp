/*
WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition
*/


#include<iostream>
using namespace std;

class A
{
	public :
	int a,b,c,d,e;
	
	input()
	{
		cout<<"Enter A : "; cin>>a ;
		cout<<"Enter B : "; cin>>b ;
		cout<<"Enter C : "; cin>>c ;
		cout<<"Enter D : "; cin>>d ;
		cout<<"Enter E : "; cin>>e ;	
	}
};

class B : public A
{
	
	public :
	
	calculate(float a,float b)  //division
	{
		cout<<"\nDivision is :"<<a/b;
		cout<<"\n--------------------------";
	}
	
	calculate(int a,int b,int c)  //substraction
	{	
		cout<<"\nSub is :"<<a-b-c;
		cout<<"\n--------------------------";
	}
	
	calculate(int a,int b,int c,int d)  //multiplication
	{
		cout<<"\nMultiplication is :"<<a*b*c*d;
		cout<<"\n--------------------------";
	}
	
	calculate(int a,int b,int c,int d,int e)  //Addition
	{
		cout<<"\nSum is :"<<a+b+c+d+e;
	}
	
};

main()
{
	
	B x ;
	x.input();
	x.calculate(x.a,x.b);
	x.calculate(x.a,x.b,x.c);
	x.calculate(x.a,x.b,x.c,x.d);
	x.calculate(x.a,x.b,x.c,x.d,x.e);

}
