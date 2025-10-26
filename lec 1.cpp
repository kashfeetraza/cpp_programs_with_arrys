#include<iostream>
using namespace std;

class Human{
    protected:
        string name;

    public:
        Human(string n):name(n){}

    virtual void display(){
        cout<< "Name:" << name << endl;
    }
        

     virtual void pirintinfo() = 0;
};

class student: public Human{
    private:
     int roll;

     public:
     student(string n,int roll): Human(n,roll){}

     void display() override{
        cout << "Name:" << n << endl;
     }

     void pirintinfo() override{
        cout << "Roll : "<< roll <<endl;

     }
};
int main(){
    Human *h= new student("Ali",1);

    h->display();
    h->pirintinfo();
    return 0;
}