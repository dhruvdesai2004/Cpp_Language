//3. WAP to make Bank Management System.

#include <iostream>
using namespace std;

class Bank {
    private:
    	char dummy, pick ;
    	int ID,phone ;
    	string name,email;
        float balance=0;
    public:
    	
    	rock(){
			cout<< "\t\t:- BANK MANAGMENT SYSTEM -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl ;
			cout<<endl;
			cout<< "\t\t:- DESIGN AND PROGRAM BY -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t\tDHRUV DESAI " <<endl;
			cout<<endl;
			cout<< "\t\t        :- TRAINER -:       "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t\t   SIMARAN"<<endl;
			cout<<endl;
			cout<<endl;
			cout<< "PRESS ANY KEY FOR NEXT PAGE : "; cin>>dummy;
			system("cls");
		}
		
		Staff(){
			rep : 
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<" :- Press A To login Administrator AND B to Login staff"<<endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<endl;
			cout<< "press A key And Next Page  : "; cin>>pick;
			
			if(pick=='A' || pick=='a')
			{
				cout<<"\n------------------------------------------------------------" ;
				cout<<"\nWelcome to administration : ";
				cout<<"\n------------------------------------------------------------" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Staff Member :" ; cin>>ID ;
				cout<< "\tEnter The Phone Number Of Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered : \n";
				cout<<"------------------------------------------------------------"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<ID;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n------------------------------------------------------------"<<endl ;
			}
			
			else if(pick=='B' || pick=='b')
			{
				cout<<"\n------------------------------------------------------------" ;
				cout<<"\nWelcome to staff : ";
				cout<<"\n------------------------------------------------------------" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Staff Member :" ; cin>>ID ;
				cout<< "\tEnter The Phone Number Of Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered! : \n";
				cout<<"------------------------------------------------------------"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<ID;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n------------------------------------------------------------"<<endl ;
			}
			else 
			{
				cout<<"\nInvalid Input\n\n";
				goto rep;
			}
			
		}
        void deposit(float amount) {
            balance += amount;
            cout << amount << " INR deposited successfully!" << endl;
        }
        void withdraw(float amount) {
            if (amount > balance) {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            } else {
                balance -= amount;
                cout << amount << " INR withdrawn successfully!" << endl;
            }
        }
        void display() {
            cout << "Your current balance is " << balance <<"INR"<<  endl;
        }
};

int main() {
    Bank customer;
    int choice;
    float amount;

	customer.rock();
	customer.Staff();
	
    while (true) {
        cout << "\n\nPlease select an option:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "\n Option : ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter deposit amount INR: ";
                cin >> amount;
                customer.deposit(amount);
                break;
            case 2:
                cout << "\nEnter withdrawal amount ";
                cin >> amount;
                customer.withdraw(amount);
                break;
            case 3:
                customer.display();
                break;
            case 4:
                cout << "\nThank you for visit" << endl;
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }
}
