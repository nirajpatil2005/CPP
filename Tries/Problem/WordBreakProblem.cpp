#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class node
{
public:
    unordered_map<char, node *> children;
    bool endofword;
    node()
    {
        endofword = false;
    }
};
class trie
{
public:
    node *root;
    trie()
    {
        root = new node();
    }
    void insert(string key)
    {
        node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (temp->children.count(key[i]) == 0)
            {
                temp->children[key[i]] = new node();
            }
            temp = temp->children[key[i]];
        }
        temp->endofword = true;
    }
    bool search(string key)
    {
        node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (temp->children.count(key[i]))
            {
                temp = temp->children[key[i]];
            }
            else
                return false;
        }
        return temp->endofword;
    }
};
bool helper(trie tr,string key)
{
    if(key.size()==0)
    {
        return true; 
    }
    for(int i=0;i<key.size();i++)
    {
        string first=key.substr(0,i+1);
        string second=key.substr(i+1);
        if(tr.search(first) && helper(tr,second))
        {
            return true;
        }
    }
    return false;
}
bool wordbreak(vector<string> dict, string key)
{
    trie tr;
    for(int i=0;i<dict.size();i++)
    {
        tr.insert(dict[i]);
    }
    return helper(tr,key);
}
int main()
{
    vector<string> dict = {"i", "like", "sam", "samsung", "ice", "thee"};
    trie tr;
    cout<<wordbreak(dict,"ilikesamsung")<<endl;

    return 0;
}