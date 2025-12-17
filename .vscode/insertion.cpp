#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0;i<n-1;i++){
        int min_index=i;
        for(int j =i+1; j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int minvalue = arr[min_index];
        for( int k=min_index; k>i; k--){
            arr[k] = arr[k-1];
        }
        arr[i] = minvalue;

    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}