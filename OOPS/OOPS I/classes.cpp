#include<iostream>
using namespace std;
class student{
    public:
    
    int rollno;
    int age;
    long long mobno;
    string address;

};
int main()
{
    student niraj;
    niraj.rollno=03;
    niraj.age=19;
    niraj.mobno=9226483843;
    niraj.address="nashik";
    cout<<"rollno"<<" "<<"age"<<" "<<"    mobno"<<" "<<"    address"<<endl;

    cout<<niraj.rollno<<"       "<<niraj.age<<" "<<niraj.mobno<<" "<<niraj.address<<endl;
}