#include <iostream>
using namespace std;

int main(){
	
	const float tax = 0.06;
	float item1 = 2.4;
	float item2 = 3.4;
	float item3 = 4.4;
	float item4 = 5.4;
	float item5 = 6.4;
	float subtotal;
	float sales_tax;
	float total;
	
	cout << " The prices of all the items are listed below:" << endl;
	cout << item1 << endl;
	cout << item2 << endl;
	cout << item3 << endl;
	cout << item4 << endl;
	cout << item5 << endl;
	
	subtotal = item1 + item2 + item3 + item4 + item5;
	
	cout << "Subtotal Amount =" << subtotal << endl  ;
	
	sales_tax = subtotal * tax;
	
	cout << "Total Sales Tax =" << sales_tax << endl ;
	
	total = subtotal + sales_tax;
	
	cout << "Total Amount Payable" << total << endl ;
	
	return 0;
	
	
}