#include<iostream>
using namespace std;
int main()
{
   float x,y;
   int n;
   cout<<"following applications in calculator :"<<endl;
   cout<<" 1 addition\n";
   cout<<" 2 substrraction\n";
   cout<<" 3 multipliacation\n";
   cout<<" 4 division \n ";
   cout<<" \n what application you want choose its no :";
   cin>>n;
   cout<<"enter no: ";
   cin>>x;
   cout<<"enter no:";
   cin>>y;
   switch(n==1)
   {
    case 1:
   cout<<x+y;

   }
   switch(n==2)
   {
    case 1:
    cout<<x-y;
   }
   switch(n==3)
   {
    case 1:
    cout<<x*y;
   }
    switch(n==4)
    {
        case 1:
        float z =x/y;
        cout<<z;
    }
    return 0;

  
}