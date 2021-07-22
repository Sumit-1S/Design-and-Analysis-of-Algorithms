#include<iostream>
#include<stdlib.h>
using namespace std;

int no_occur(int* arr,int n,int target,int i)
{
    int j,k;
    for(j=i-1;j>=0;j--)
        if(arr[j]!=target)
            break;
    for(k=i+1;k<n;k++)
        if(arr[k]!=target)
            break;
    return k-j-1;
}

void find(int* arr,int n,int target)
{
    int count=0,f=0,l=n-1;
    while(f<l)
    {
        int mid = f+(f+l)/2;
        if(arr[mid]==target)
            cout<<target<<" - "<<no_occur(arr,n,target,mid)<<endl;
        else if(arr[mid]>target)
            l = mid-1;
        else
            f = mid+1;
    }
    cout<<"Not Present";
}

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
        int n;
        cin>>n;
        int *arr = (int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cin>>k;
        find(arr,n,k);
    }
    return 0;
}