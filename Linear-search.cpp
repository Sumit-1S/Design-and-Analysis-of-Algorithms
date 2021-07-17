#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            cout<<"Element found"<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}
