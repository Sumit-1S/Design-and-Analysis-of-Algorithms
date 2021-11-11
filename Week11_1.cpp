#include<bits/stdc++.h>
using namespace std;

int MatrixMultiply(int arr[],int n)
{
    int **sol = new int*[n];
    for(int i=0;i<n;i++)
        sol[i] = new int[n],sol[i][i]=0;
    for(int L=2;L<n;L++)
    {
        for(int i=1;i<n-L+1;i++)
        {
            int j=i+L-1;
            sol[i][j]=INT_MAX;
            for(int k=i;k<=j-1;k++)
            {
                int q = sol[i][k] + sol[k+1][j] + arr[i-1]*arr[k]*arr[j];
                if(q<sol[i][j]) sol[i][j]=q;
            }
        }
    }
    return sol[1][n-1];
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++) cin>>arr[i];
    cout<< MatrixMultiply(arr,n+1);
    return 0;
}