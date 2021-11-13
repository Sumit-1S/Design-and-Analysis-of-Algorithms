#include<bits/stdc++.h>
using namespace std;

bool SumSubset(int *arr,int n,int sum)
{
  if(sum==0)          return true;
  if(n==0 and sum!=0) return false;
  if(arr[n-1]>sum)    return SumSubset(arr,n-1,sum);
  return SumSubset(arr,n-1,sum) or SumSubset(arr,n-1,sum-arr[n-1]);
}



int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    int sum=0;
    for(int i=0;i<n;i++)  cin>>arr[i];
    for(int i=0;i<n;i++)  sum+=arr[i];
    sum%2==0  ? (SumSubset(arr,n,sum/2) ? cout<<"Yes":cout<<"No") 
              : cout<<"No";
    
    return 0;
}