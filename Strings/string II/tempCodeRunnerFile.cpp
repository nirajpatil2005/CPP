    string s="leetcode";
    int arr[26];
    char ch;
    for(int i=0;i<26;i++)
    {
        int q=i+97;
         ch=(int)q;
        arr[i]=arr[ch];
    }
      for(int i=0;i<26;i++)
    {
        cout<<arr[i]<<" ";
    }
