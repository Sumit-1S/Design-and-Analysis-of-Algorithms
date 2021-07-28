#include<iostream>
#include<stdlib.h>
using namespace std;
//Using two pointers approach
void find_pair(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int j=0,k=n-1;
        while(j<k)
        {
            int sum=arr[j]+arr[k];
            if(sum==arr[i] && (i!=j && i!=k))
            {
                cout<<i<<" "<<j<<" "<<k<<endl;
                return;
            }
            else if(sum>arr[i])
                k--;
            else
                j++;
        }
    }
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