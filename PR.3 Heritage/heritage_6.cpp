//6. WAP to read and print employee information with use of multilevel inheritance.


#include<iostream>
using namespace std;

class A{
	protected :
	int id,salary,exp,contact;
	string name,role,c_name,add,e_mail;
	
	public :
		void setA()
		{
			cout<<"Enter name  :- ";
			cin>>name;
			cout<<"Enter id  :- ";
			cin>>id;
			cout<<"Enter role :- ";
			cin>>role;
		}
};

class B : public A{
	public :
		void setB()
		{
			cout<<"Enter salary  :- ";
			cin>>salary;
			cout<<"Enter experience  :- ";
			cin>>exp;
		}
};

class C : public B{
	public :
		void setC()
		{
			cout<<"Enter compny name  :- ";
			cin>>c_name;
			cout<<"Enter address :- ";
			cin>>add;
		}
		void detC()
		{
			cout<<"Name  :- "<<name<<endl;
			cout<<"Roll :- "<<role<<endl;
			cout<<"Salary :- "<<salary<<endl;
		}
};

class D : public C{
	public :
		void setD()
		{
			cout<<"Enter e-mail :- ";
			cin>>e_mail;
			cout<<"Enter contact number  :- ";
			cin>>contact;
		}
		void detD()
		{
			cout<<"Name of employee :- "<<name<<endl;
			cout<<"Roll of employee :- "<<role<<endl;
			cout<<"Salary of employee :- "<<salary<<endl;
			cout<<"Compny name of employee :- "<<c_name<<endl;
			cout<<"Id of employee :- "<<id<<endl;
			cout<<"E-mail of employee :- "<<e_mail<<endl;
			cout<<"Contact number of employee :- "<<contact<<endl;
			cout<<"Experience of employee :- "<<exp<<endl;
			cout<<"Address of employee :- "<<add<<endl;
		}
};

main()
{
	D c;
	c.setA();
	cout<<endl;
	c.setB();
	cout<<endl;
	c.setC();
	cout<<endl;
	c.detC();
	cout<<endl;
	c.setD();
	cout<<endl;
	c.detD();
}
