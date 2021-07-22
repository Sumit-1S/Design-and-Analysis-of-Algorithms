#include<iostream>
#include<stdlib.h>
using namespace std;

int jump_search(int* arr,int n, int key)
{
    int i,count=0;
    for(i=1;i<=n;i*=2)
    {
        count++;
        if(arr[i-1]==key)
        {
            cout<<"Number of comparisions : "<<count++<<endl;
            return 1;
        }
        else if(arr[i-1]>key)
            break;
    }
    for(int j=i/2-1;j<n;j++)
    {
        count++;
        if(arr[j]==key)
        {
            cout<<"Number of comparisions : "<<count++<<endl;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
        int n,key;
        cin>>n;
        int *a = (int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>key;
        jump_search(a,n,key) == 1 ? cout<<"Element is Present" : cout<<"Element is Absent" ;
    }
}
