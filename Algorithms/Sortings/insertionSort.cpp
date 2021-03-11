#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(auto i :arr)
    cout<<i<<" ";
    return 0;
}