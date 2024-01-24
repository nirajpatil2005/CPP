#include<iostream>
#include<cstring>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s="Raghav is a math teacher. he is also a dsa practitinor";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    //print vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }cout<<endl;
    sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    int max=1;
    string mostocurringword;
    for(int i=1;i<v.size();i++)
    {
        int count=1;
        if(v[i]==v[i-1])
        {
            count++;
        }
        if(max<=count)
        {
            max=count;
            mostocurringword=v[i];
            cout<<"most occuring word is "<<mostocurringword<<" with count of "<<max<<endl;
    }
        }
         
   






}