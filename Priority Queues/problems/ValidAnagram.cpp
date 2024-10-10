#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// void validAnagram(string s, string t)
// {
//     unordered_map<char, int> map;
//     for (char ele : s)
//     {
//         if (map.count(ele))
//             map[ele]++;
//         else
//             map[ele] = 1;
//     }
//     for (pair<char, int> ele : map)
//     {
//         cout << ele.first << " :" << ele.second << endl;
//     }
//      for (char ele : t)
//     {
//         if (map.count(ele))
//             map[ele]--;
//         else
//             map[ele] = 1;
//     }
//     for (pair<char, int> ele : map)
//     {
//         cout << ele.first << " :" << ele.second << endl;
//     }
// }
bool validAnagram(string s,string t)
{
    unordered_map<char,int>freq;
    for(int i=0;i<s.size();i++)
    {
        if(freq.count(s[i]))
        {
            freq[s[i]]++;
        }
        else freq[s[i]]=1;
    }
    for(int i=0;i<t.size();i++)
    {
        if(freq.count(t[i]))
        {
            freq[t[i]]--;
            if(t[i]==0) freq.erase(t[i]);
        }
        else return false;
        return true;
    }
    return freq.size()==0;
}
int main()
{
    string s = "lipid";
    string t = "tulip";
    cout<<validAnagram(s, t)<<endl;
    s="race";
    t="care";
    cout<<validAnagram(s,t);
    return 0;
}