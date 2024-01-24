#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rno;
    float marks;
    student(string n, int r, float m)
    {
        this->name = n;
        this->rno = r;
        this->marks = m;
    }
   
};
 void change(student &s)
    {
        s.name="niraj";
    }
int main()
{
    student s = {"raghav", 76, 92.6};
    // s.marks=67;
    // s.name="Niraj";
    // s.rno=34;
    // cout << "name: " << s.name << " roll no: " << s.rno << " marks: " << s.marks;
    //  change(s);
    // cout<<endl << "name: " << s.name << " roll no: " << s.rno << " marks: " << s.marks;
    student *ptr=&s;
   (*ptr).name="niraj";
   (*ptr).rno=87;
   ptr->marks=98;
     cout<<endl << "name: " << s.name << " roll no: " << s.rno << " marks: " << s.marks;

}