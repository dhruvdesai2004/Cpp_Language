#include<iostream>
using namespace std;

class detail{
	int area,n_rooms,floor;
	
	public :
		void input(){
			
			cout<<"Enter the area of house in squre feet : ";
			cin>>area;
			cout<<"Enter the number of room in house : ";
			cin>>n_rooms;
			cout<<"Enter the number of floor in house : ";
     		cin>>flore;	
		}
		
		void output(){
			cout<<"\nThe area of house : "<<area;
			cout<<"\nThe house has given number of rooms : "<<n_rooms;
			cout<<"\nThe house has given floor of rooms : "<<floor;
		}
};

int main()
{
    detail t;
	t.input();
	t.output();
	return 0;
}

