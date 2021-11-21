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
        int n,m,i,j;
        cout<<"Enter size of array 1: ";
        cin>>n;
        int *a = new int[n];
        cout<<"Enter elements of array: ";
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter size of array 2: ";
        cin>>m;
        int *b = new int[m];
        cout<<"Enter elements of array: ";
        for(i=0;i<m;i++)
            cin>>b[i];
        
        for(i=0,j=0;i<n && j<m;)
        {
            if(a[i]<b[j])
                i++;
            else if(a[i]>b[j])
                j++;
            else{
                cout<<a[i]<<" ";
                i++;
                j++;
            }
        }
    }
    return 0;
}