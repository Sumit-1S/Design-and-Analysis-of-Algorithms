#include<iostream>
#include<stdlib.h>
using namespace std;

void find_pair(int* arr,int n)
{
    int i,j,k,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k] && (i!=j && j!=k && k!=i))
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    flag=1;
                }
            }
        }
    }
    if(flag==0)
        cout<<"No pair possible";
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
        int* arr = (int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        find_pair(arr,n);
    }
    return 0;
}