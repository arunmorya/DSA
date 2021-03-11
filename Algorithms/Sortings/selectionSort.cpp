#include<bits/stdc++.h>
using namespace std;

void selectioSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int index=i;
        for(int j=i+1; j<n; j++){
            if(arr[index]>arr[j]){
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
}
int main(){
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectioSort(arr,n);
    for(auto i :arr)
    cout<<i<<" ";
    return 0;
}