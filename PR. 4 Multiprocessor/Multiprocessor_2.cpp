// 2. WAP to add two distances using binary plus (+) operator overloading.
#include<iostream>
using namespace std;

class dis{
	private:
		int centimeter;
		int kilometer;
		int meter;
	public:
		void setData()
		{
			cout << "Enter Value of centimeter: ";
			cin >>centimeter;
			cout << "Enter Value of kilometer : ";
			cin >>kilometer;
			cout << "Enter value meter :";
			cin >>meter;
			 
		}	
		void getData()
		{
			cout << endl << "centimeter\t : " <<centimeter<< endl;
			cout << endl << "kilometer\t : " <<kilometer<< endl;
			cout << endl<< "meter\t :"<<meter<< endl;
		}
		dis operator+(dis &dist1)
		{
			dis tmp;
			tmp.centimeter = centimeter + dist1.centimeter;
			tmp.meter = meter + dist1.meter + (tmp.centimeter/100);
			tmp.centimeter = tmp.centimeter%100;
			tmp.kilometer=kilometer+dist1.kilometer+(tmp.meter/1000);
			tmp.meter=tmp.meter%1000;
			return tmp;
		}
};

int main()
{
	
	dis d1;
	dis d2;
	dis d3;
	
	d1.setData();
	d2.setData();
	
	d3 = d1 + d2 ;
	d3.getData();

	
	return 0;
}

