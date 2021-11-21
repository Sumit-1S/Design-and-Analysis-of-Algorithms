#include<bits/stdc++.h>
using namespace std;

int* insertion(int* arr,int n)
{
    if(n<1)
        return arr;
    int i,j,count_comp=0,count_shift=0;
    for(i=0;i<n-1;i++)
    {
        int key = arr[i];
        j = i-1;
        count_shift++;
        while(j>=0 && arr[j]>key)
        {
            count_shift++;
            count_comp++;
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    cout<<"comparisions = "<<count_comp<<endl;
    cout<<"swap = "<<count_shift<<endl;
    return arr;
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
        int* arr = new int[n];
        cout<<"Enter elemnets of array: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        arr = insertion(arr,n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}