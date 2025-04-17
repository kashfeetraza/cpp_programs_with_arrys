// today we print all armstrong number in the program

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int sum, val;
    cout<<"Armstrong Number->"<<endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; i++)
        {
            for (int k = 0; k < 10; i++)
            {
                val = i*100+ j*10+ k; 
                sum= pow(i,3) +pow(j,3) +pow(k,3);
                if(val==sum){
                    cout<<val<<" ";
                }
            }
            
        }
        
    }
    cout<<endl;
    
    return 0;
}