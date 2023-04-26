/*1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/

#include<iostream>
using  namespace std;

class RBI{
	public :
            double rate;
           		void getROI() {
			        cout<<"Rate :"<<rate<<"%"<<endl;
	        	}
};
class SBI : public RBI{
	
	public :
		SBI(){
			cout<<"Enter rate of SBI :";
			cin>>rate;
			cout<<"\nThe rate of SBI :"<<rate<<endl;
			cout<<"-----------------------------------\n";
		}
};

class BOB : public RBI{
	
	public :
		BOB(){
			cout<<"Enter rate of BOB : ";
			cin>>rate;
			cout<<"\nThe rate of BOB :"<<rate<<endl;
			cout<<"-----------------------------------\n";
		}
};

class ICICI : public RBI{
	
	public :
		ICICI(){
			cout<<"Enter rate of ICICI : ";
			cin>>rate;
			cout<<"\nThe rate of ICICI :"<<rate<<endl;
			cout<<"-----------------------------------\n";
		}
};

int main()
{
	SBI m;
	BOB n;
	ICICI o;
	
	m.getROI();
	n.getROI();
	o.getROI();
	
}
