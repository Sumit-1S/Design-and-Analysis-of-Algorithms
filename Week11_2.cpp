#include<bits/stdc++.h>
using namespace std;

int coin(int *arr,int n,int t)
{
  if(t==0) return 1;
  if(t<0) return 0;
  if(n<=0 and t>=1) return 0;
  return coin(arr,n-1,t) + coin(arr,n,t-arr[n-1]);
}

int main()
{
    int n,t;
    cout<<"Enter number of coins : ";
    cin>>n; 
    int *arr = new int[n];
    cout<<"Enter values of coins : "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter Desired amount : ";
    cin>>t;
    cout<<coin(arr,n,t);
    return 0;
}