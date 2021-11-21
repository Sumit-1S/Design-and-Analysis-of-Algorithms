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
    cout<<"Number of Pair : "<<count<<endl;
}

int main()
{
    int t;
    cout<<"Enter number of testcases: ";
    cin>>t;
    while(t)
    {
        t--;
        int n;
        cout<<"Enter size of array: ";
        cin>>n;
        int *arr=(int*)malloc(n*sizeof(int));
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Enter the value of key difference: ";
        int k;
        cin>>k;
        findPair(arr,n,k);
    }
}