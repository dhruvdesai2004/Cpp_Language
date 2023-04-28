/*
2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes
*/

#include<iostream>
using namespace std;

class cricket
{
	public :
		int t20_over=8,test_over=50;
		void getTotalOvers()
		{
			cout<<"\nCricket is very populre game.";
			cout<<"\n--------------------------";
		}
};

class t20 : public cricket
{
	public :
		void getTotalOvers()
		{
			cout << "\nT20 over is : "<<t20_over;
			cout<<"\n--------------------------";
		}
};

class test : public t20
{
	public :
		void getTotalOvers()
		{
			cout << "\nTest match over : " <<test_over;
			cout<<"\n--------------------------";
		}
};

int main()
{

	test m;
	m.getTotalOvers();
	m.t20::getTotalOvers();
	m.cricket::getTotalOvers();
}
