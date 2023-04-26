/*2. WAP to perform four different number’s sum by
inheriting constructors in hybrid inheritance.*/

#include <iostream>
using namespace std;

class A{
	public :
		int a;
		void setter(){
		
	cout<<"enter the value of a :";
	cin>>a;
}
};

class B :public A{
	public :
		int b;
		void getter(){
		
	cout<<"enter the value of b :";
	cin>>b;
}
};

class C :public A{
	public :
		int c;
		void setdata(){
		
	cout<<"enter the value of c :";
	cin>>c;
}
};

class D :public B,public C{
	public :
		int d;
		void setd(){
		
	cout<<"enter the value of d :";
	cin>>d;
	cout<<"the sum of a,b,c and d is :"<<B::a+b+c+d<<endl;
}
};
int main()
{
	D d1;
	d1.B::setter();
	d1.getter();
	d1.setdata();
	d1.setd();
}
