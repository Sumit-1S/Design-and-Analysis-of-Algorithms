#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"Enter number of testcases: ";
    cin>>t;
    while(t)
    {
        t--;
        int *arr = new int[26],n;
        cout<<"Enter size of array: ";
        cin>>n;
        char *a = new char[n];
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<26;i++)
            arr[i]=0;
        for(int i=0;i<n;i++)
            arr[a[i]-97]++;
        int max = 0;
        for(int i=0;i<26;i++)
            if(arr[max]<arr[i])
                max=i;
        if(arr[max]==1)
            cout<<"No Duplicate Found"<<endl;
        else 
            cout<<a[max]<<"-"<<arr[max]<<endl;
    }
    return 0;
}