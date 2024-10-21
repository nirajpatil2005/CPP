  #include <iostream>
  #include<vector>
  #include<algorithm>
  using namespace std;
  //o{2^n}
  int knapsackRec(vector<int>val,vector<int>wt,int W,int n)
  {
    if(n==0 || W==0)return 0;
    int itmwt=wt[n-1];
    int itmval=val[n-1];
    if(itmwt<=W)
    {
        //include
      int ans1=  knapsackRec(val,wt,W-itmwt,n-1)+itmval;
        //exclude
      int ans2=knapsackRec(val,wt,W,n-1);

      return max(ans1,ans2);
    }
    else
    {
        //exclude
       return knapsackRec(val,wt,W,n-1);
    }
  }
  int main()
  {
    vector<int>val={15,14,10,45,30};
    vector<int>wt={2,5,1,3,4};
    int W=7;
    int n=5;
    cout<<knapsackRec(val,wt,W,n)<<endl;
    return 0;
  }