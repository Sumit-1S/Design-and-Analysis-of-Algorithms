#include<bits/stdc++.h>
using namespace std;

struct trio{
  int index,duration,deadline;
};

struct comp{
  bool operator()(trio a,trio b)
  {
    return a.deadline<b.deadline;
  }
};

int main()
{
    int n;
    cout<<"Enter total number of task : ";
    cin>>n;
    trio *arr = new trio[n];
    cout<<"Enter Time taken and Deadline of each task : ";
    for(int i=0;i<n;i++)
    {
      arr[i].index=i+1;
      cin>>arr[i].duration>>arr[i].deadline;
    }

    sort(arr,arr+n,comp());
    
    int count=0,time=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      if(arr[i].duration<=arr[i].deadline-time)
      {
        count++;
        v.push_back(arr[i].index);
        time+=arr[i].duration;
      } 
    }

    cout<<"Max number of tasks : "<<count<<endl;
    
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<" ";
    
    return 0;
}