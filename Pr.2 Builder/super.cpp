#include <iostream>
#include <string>

using namespace std;

class GroceryItem {
public:
    int itemNumber;
    string itemName;
    double itemPrice;
    string itemUnit;

    GroceryItem(int number, string name, double price, string unit) {
        itemNumber = number;
        itemName = name;
        itemPrice = price;
        itemUnit = unit;
    }
};

int main() {

    GroceryItem a[10] = {
        
        {1, "Apples", 55.90, "kg"},
        {2, "Rice", 300.64, "kg"},
        {3, "Milk", 250.55, "gallon"},
        {4, "Tomatoes", 80.56, "kg"},
        {5, "Bananas", 45.00, "kg"},
        {6, "Cheese", 17.15, "kg"},
        {7, "Sugar", 40.50, "kg"},
        {8, "Eggs", 140.00, "dozen"},
        {9, "khakhra", 300.00 , "kg"},
        {10, "maggi", 90.20, "kg"},
        
	
    };

    for (int i = 0; i < 10; i++) {
        cout << "Item " << i+1 << ": " << a[i].itemName << ", " << a[i].itemPrice << " rupees per " << a[i].itemUnit << endl;
    }

	int cart[100];
	int choice=1, i=0 ; 
	float price=0;
	cout<<endl;
	while(choice!=0)
	{
		cout<<"Any one choice item or press 0 : "; cin>>cart[i]; 
		choice=cart[i];
		i++; 
	}
	cout<<"\n\n\t-----------------------------------";
	cout<<"\n\tShopping card items : \n";
		
	 for (int i = 0; cart[i]!=NULL ; i++)
	  {
	 	int j=cart[i];
        cout << "\tItem " << j << ": " << a[j-1].itemName << ", " << a[j-1].itemPrice << " rupees per " << a[j-1].itemUnit << endl;
        price=price+a[j-1].itemPrice;
      }	
   
	cout<<"\n\t==-==-==-==-==-==-==-==-==-==-==-==-==-==-==";
	cout<<"\n\tYour Bill is : "<<price<<" Rupees.";
	cout<<"\n\t==-==-==-==-==-==-==-==-==-==-==-==-==-==-==";
	cout<<"\n\tAfter 10 % discount : "<<price-price/10<<" Rupees.";
			
}
