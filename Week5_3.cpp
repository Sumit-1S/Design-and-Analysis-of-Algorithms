#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
        int n,m,i,j;
        cin>>n;
        int *a = new int[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int *b = new int[m];
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