#include<iostream>
#include<stdlib.h>
using namespace std;

int binary(int *arr,int n,int key)
{
    int f=0,r=n-1,count=0;
    while(f!=r)
    {
        int mid = (f+r)/2;
        if(arr[mid]==key){
            cout<<"Number of comparision : "<<count++<<endl;
            return 1;
        }
        else if(arr[mid]>key)
            r = mid;
        else
            f = mid;
        count++;
    }
    return 0;
}

int main()
{
    int t;
    cout<<"Enter number of test case: ";
    cin>>t;
    while(t)
    {
        t--;
        int n,key;
        cout<<"Enter size of array: ";
        cin>>n;
        int *a = (int*)malloc(n*sizeof(int));
        cout<<"Enter elements of array: ";
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter element to be searched: ";
        cin>>key;
        binary(a,n,key) == 1 ? cout<<"Element is Present" : cout<<"Element is Absent" ;
    }
    return 0;
}