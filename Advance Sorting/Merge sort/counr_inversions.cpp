#include<iostream>
#include<vector>
using namespace std;
//brutforce
void count_inversion(vector<int>arr)//bruteforce method
{
    int count=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    cout<<"Count of inversion in array is: "<<count<<endl;
}
int main()
{
    vector<int>v={5,1,3,0,4,9,6};
    count_inversion(v);//by using bruteforce method
                        // s.c=o(1) t.c=o(n^2)

}