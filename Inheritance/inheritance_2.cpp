/*2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method*/

#include<iostream>
using namespace std ;

class P {
	public :
	int C ;
		
		void takeC(){
			cout<<"Enter The Temperature In Degree Celsius : "; 
			cin>>C ;  
		}	
};

class Q : public P

{
	public :
	float F ;
		
		void toFahrenheit(){	
			F = C*1.8 + 32 ;
			cout<<"\nTemperature In Fahrenheit : "<<F ;	
		}	
};

class D : public Q
{	
	public :
	float K ;
		
		void Kelvin(){
			K = (F-32)*0.56 + 273.15 ;
			cout<<"\nTemperature In Kelvin : "<<K ;
		}
};

main(){	
	D d ;
	d.takeC() ;
	d.toFahrenheit() ;
	d.Kelvin() ;
}
