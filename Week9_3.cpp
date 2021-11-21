#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  priority_queue<int,vector<int>,greater<int> > prio;
  cout<<"Enter elements of array : "<<endl;
  for(int i=0;i<n;i++)
  {
    int t;
    cin>>t;
    prio.push(t);
  }
  int t1,t2,count,total=0;
  do
  {
    t1=prio.top();
    prio.pop();
    t2=prio.top();
    prio.pop();
    count=t1+t2;
    prio.push(count);
    total+=count;
  }while(!prio.empty());
  cout<<"Minimum computation: "<<total-count;
  return 0;
}