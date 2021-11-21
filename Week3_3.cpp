#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int l,int m,int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int *a = new int[n1];
    int *b = new int[n2];

    for(int i=0;i<n1;i++)
        a[i] = arr[i+l];
    for(int i=0;i<n1;i++)
        b[i] = arr[i+m+1];

    int i,j,k=l;

    for(i=0,j=0;i<n1 && j<n2;)
    {
        if(a[i]>b[j])
        {
            arr[k] = b[j];
            k++;
            j++;
        }
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        
        if(a[i]==b[j])
        {
            arr[k] = b[j];
            k++;
            arr[k] = a[i];
            k++;
            i++;
            j++;
        }

    }
    while(i<n1)
    {
        arr[k] = a[i];
        k++;
        i++; 
    }
    while(j<n2)
    {
        arr[k] = b[j];
        k++;
        j++; 
    }
}

void Merge(int *arr,int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        Merge(arr,l,mid);
        Merge(arr,mid+1,r);
        merge(arr,l,mid,r);
    }

}

void find_duplicate(int *arr,int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
    return;
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
        Merge(arr,0,n-1);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        find_duplicate(arr,n);
        cout<<endl;
    }
    return 0;
}