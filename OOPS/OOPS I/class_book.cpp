#include <iostream>
using namespace std;
class book
{
public:
   char name;
    int price;
    int page;
    int countbooks(int p)
    {
        if (price < p)
            return 1;
        else
            return 0;
    }
    bool isbookpresent(char book)
    {
        if (name == book)
            return true;
        else return false;
    }
};
int main()
{
    book harry;
    harry.name='h';
    harry.price=100;
    harry.page=500;
    cout<<harry.countbooks(100);
    cout<<harry.isbookpresent('h');
}
