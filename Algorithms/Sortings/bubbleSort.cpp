#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(auto i :arr)
    cout<<i<<" ";
    return 0;
}