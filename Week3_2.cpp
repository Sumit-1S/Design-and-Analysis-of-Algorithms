#include<bits/stdc++.h>
using namespace std;

int* selection(int *arr, int n)
{
    if (n<1)
        return arr;
    int i,j,count_shift=0,count_comp=0;
    for(i=0;i<n-1;i++)
    {
        int min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
            count_comp++;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        count_shift++;
    }
    cout<<"comparison = "<<count_comp<<endl;
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
        int *arr = new int[n];
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        arr = selection(arr,n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}