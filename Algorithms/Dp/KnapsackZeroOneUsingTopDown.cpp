#include<bits/stdc++.h>
using namespace std;

int arr[1005][1005];

int knapSack(int W, int wt[], int val[], int n)
{
    for(int i=0; i<n+1; i++)
        for(int j=0; j<W+1; j++)
            if(i==0 || j==0)
                arr[i][j]=0;
    for(int i=1; i<n+1; i++)
        for(int j=1; j<W+1; j++)
            if(wt[i-1]<=j)
                arr[i][j]=max( val[i-1]+arr[i-1][j-wt[i-1]] ,arr[i-1][j] );
            else 
                arr[i][j]=arr[i-1][j];
    return arr[n][W];                           
}
int main()
{
    int val[] = { 10, 20, 30 }; 
    int wt[] = { 1, 1, 1 }; 
    int W = 2; 
    int n = sizeof(val) / sizeof(val[0]); 
    cout << knapSack(W, wt, val, n); 
    return 0;
}
