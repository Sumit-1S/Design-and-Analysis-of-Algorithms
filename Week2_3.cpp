#include<iostream>
#include<stdlib.h>
using namespace std;

void findPair(int *arr, int n,int key)
{
    int i,j,count=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==key)
                count++;
        }
    }
    cout<<"Number of Pair : "<<count;
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
        int *arr=(int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cin>>k;
        findPair(arr,n,k);
    }
}