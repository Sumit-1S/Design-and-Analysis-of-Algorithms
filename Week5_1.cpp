#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
        int *arr = new int[26],n;
        cin>>n;
        char *a = new char[n];
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
        cout<<a[max]<<"-"<<arr[max]<<endl;
    }
    return 0;
}