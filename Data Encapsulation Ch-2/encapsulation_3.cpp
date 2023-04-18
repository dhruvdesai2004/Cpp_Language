#include<iostream>
using namespace std;

class hotel{
	int id;
	string type;
	string location;
	int ratting ,est_year,staff_qua,room_qua;
	static string name;
	
	public :
	void setter()
	{
		cout<<"******************************************\n";
		cout<<"Enter the id :";
		cin>>id;
		cout<<"Enter the type (hotel or motel) :";
		cin>>type;
		cout<<"Enter the location"<<" "<< type;cout<<":";
		cin>>location;
		cout<<"Enter the ratting of hotel :";
		cin>>ratting;
		cout<<"Enter establicsh_year :";
		cin>>est_year;
		cout<<"Enter the quantity staff :";
		cin>>staff_qua;
		cout<<"Enter the quantity room :";
		cin>>room_qua;	
		cout<<"===========================================\n";
	}
	void getS()
		{
			cout<<"the name of hotal is :"<<name<<endl<<endl;
		}	
	void satter1()
	{
		cout<<"Enter the id :"<<id<<endl;
		cout<<"Enter the type (hotel or motel) :"<<type<<endl;
		cout<<"Enter the location :"<<location<<endl;
		cout<<"Enter the ratting of hotel :"<<ratting<<endl;
		cout<<"Enter establicsh_year :"<<est_year<<endl;
		cout<<"Enter the quantity staff :"<<staff_qua<<endl;
		cout<<"Enter the quantity room :"<<room_qua<<endl;	
	}	
};
string hotel :: name = "Tulsi";
int main()
{
	int i,n;
	cout<<"Enter the number of hotal :";
	cin>>n;
	
	hotel a[n];
	
	for(i=0;i<n;i++)
	{
		a[i].setter();
		a[i].satter1();
		a[i].getS();
	}
	return 0;
}
