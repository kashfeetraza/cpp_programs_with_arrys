#include<iostream>
using namespace std;

int main(){
    int n, x, arr[10];
    cout<<"Enter The number of Array:";
    cin>>n;

    cout<<"Enter the element of Array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

    cout<<"The second value is "<<arr[1]<<endl;
    cout<<"The second last value is "<<arr[n-2]<<endl;
    
    return 0;
}
