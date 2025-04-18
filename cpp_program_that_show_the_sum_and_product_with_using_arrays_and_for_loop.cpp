//today we made a program in cpp
//that show the sum and product 
// of the number in Arrays with using
// for loop and Arrays

#include<iostream>
using namespace std;
int main(){
	int i,n ,sum = 0 ,pro = 1,a[10];
	cout<<"Enter the number of Arrays:";
	cin>>n;
	cout<<"Enter the element of Arrays:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		sum += a[i];
		pro *= a[i];
	}
	cout<<"The sum of these number is:"<<sum<<endl;
	cout<<"The product of these number is:"<<pro<<endl;
}
