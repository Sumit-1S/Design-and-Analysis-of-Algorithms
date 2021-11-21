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
                    return;
                }
            }
        }
    }
    cout<<"No pair possible\n";
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
        int* arr = (int*)malloc(n*sizeof(int));
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        find_pair(arr,n);
    }
    return 0;
}