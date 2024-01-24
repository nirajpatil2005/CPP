#include <iostream>
using namespace std;
int main()
{
   cout << "size given to datatypes:" << endl;
   cout << "float:" << sizeof(float) << endl;
   cout << "int :" << sizeof(int) << endl;
   cout << "char:" << sizeof(char) << endl;
   cout << "double:" << sizeof(double) << endl;
   cout << "bool:" << sizeof(bool) << endl;
   cout << "unsigned int:" << sizeof(unsigned int) << endl;
   cout << "long int:" << sizeof(long int) << endl;
   cout << "long long int:" << sizeof(long long int) << endl;

   bool n = char(true);
   cout << "n:" << n<<endl;
   cout<<"adress of var n:"<<&n;//adress of variable;
}