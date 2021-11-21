#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *a = (int*)malloc(n*sizeof(int));
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cout<<"Enter the element to be searched: ";
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
