#include <iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;
void printiternary(unordered_map<string,string>tickets)
{
    unordered_set<string>to;
    for(pair<string,string>ticket:tickets)
    {
        to.insert(ticket.second);
    }
    string start="";
    for(pair<string,string>ticket:tickets)
    {
        if ((to.find(ticket.first))==to.end())
        {
            start=ticket.first;
        }
    }
    cout<<start<<"-->";
    while(tickets.count(start))
    {
        cout<<tickets[start]<<"-->";
        start=tickets[start];
    }
    cout<<"destination"<<endl;
}
int main()
{
    unordered_map<string,string>tickets;
    tickets["chennai"]="bengaluru";
    tickets["mumbai"]="delhi";
    tickets["goa"]="chennai";
    tickets["delhi"]="goa";
    printiternary(tickets);

    return 0;  
}