#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>ec)return 0;
    if(sc==ec && sr==er)return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
void mazepath(int sr,int sc,int er,int ec,string s,int &count)
{
    if(sr==er && sc==ec)
    {
        cout<<s<<endl;
        count++;
        return;
    }
    if(sr>er || sc>ec)return;
    mazepath(sr+1,sc,er,ec,s+'R',count);
    mazepath(sr,sc+1,er,ec,s+'D',count);
}
int nomaze(int sr,int sc)
{
    if(sr<0 || sc<0)return 0;
    if(sc==0 && sr==0)return 1;
    int rightways=nomaze(sr,sc-1);
    int downways=nomaze(sr-1,sc);
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int count=0;
    cout<<maze(0,0,2,2)<<endl;
    string s="";
    mazepath(0,0,2,2,s,count);
    cout<<count;
    cout<<endl<<nomaze(2,2);
} 