#include<bits/stdc++.h>
using namespace std;

//declaring table(matrix) to store all values
int arr[1005][1005];

int knapSack(int W, int wt[], int val[], int n)
{
    if(n==0 || W==0)
        return 0;

    if(arr[n][W]!=-1)
        return arr[n][W]; //if value present in table just return it
    else 
    {                     //else calculate the value
        if(wt[n-1] <= W)
            //maximum of included val and non included value
            return arr[n][W] = max( val[n-1]+knapSack(W-wt[n-1], wt, val, n-1) , knapSack(W, wt, val, n-1) );
        else
            return arr[n][W] = knapSack(W, wt, val, n-1);
    }        
        
}
int main()
{
    int val[] = { 10, 20, 30 }; 
	int wt[] = { 1, 1, 1 }; 
	int W = 2; 
	int n = sizeof(val) / sizeof(val[0]); 
    //setting all element to -1 in table(matrix)
    memset(arr,-1,sizeof(arr));
	cout << knapSack(W, wt, val, n); 
    return 0;
}