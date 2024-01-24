#include <iostream>
using namespace std;
class calculator
{
public:
    int a;
    int b;
    int add()
    {
        int c = a + b;
        return c;
    }
};
int main()
{
    calculator calci;
    calci.a=89;
    calci.b=78;
    cout<<calci.add();


}