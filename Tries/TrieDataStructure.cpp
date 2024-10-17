//building trie data structure
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class node
{
    public:
    unordered_map<char,node*>children;
    bool endofword;
    node()
    {
        endofword=false;
    }
};
class trie
{
    node* root;
    public:
    trie()
    {
        root=new node();
    }
    void insert(string key)
    {
        node* temp=root;
        for(int i=0;i<key.size();i++)
        {
           if(temp->children.count(key[i])==0) //children not exist
           {
            temp->children[key[i]]=new node();
           }
           temp=temp->children[key[i]];
        }
        temp->endofword=true;
    }
    bool search(string key)
    {
        node* temp=root;
        for(int i=0;i<key.size();i++)
        {
            if(temp->children.count(key[i]))
            {
                temp=temp->children[key[i]];
            }
            else return false;
        }
        return temp->endofword;
    }
};
int main()
{
    vector<string>words={"the","a","there","their","any","thee"};
    trie tr;
    for(int i=0;i<words.size();i++)
    {
        tr.insert(words[i]);
    }
    cout<<tr.search("ant");
    return 0;
}