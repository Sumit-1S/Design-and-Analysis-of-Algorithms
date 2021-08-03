#include<bits/stdc++.h>
using namespace std;

int* selection(int *arr, int n)
{
    if (n<1)
        return arr;
    int i,j,count_shift=0,count_comp=0;
    for(i=0;i<n-1;i++)
    {
        int min = arr[i];
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
            }
            count_comp++;
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        count_shift++;
    }
    cout<<"comparison = "<<count_comp<<endl;
    cout<<"swap = "<<count_shift<<endl;
    return arr;
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
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        arr = selection(arr,n);
        for(int i=0;i<n;i++)
            cout<<arr[i];
    }
    return 0;
}