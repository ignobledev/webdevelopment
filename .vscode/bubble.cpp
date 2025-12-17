#include<iostream>
using namespace std;
#include<vector>
void bubbleshort(vector<int>& arr){
int n = arr.size();
bool swapped;
for(int i =0; i<n-1; i++){
swapped  = false;
for(int j = 0; j<n-i-1; j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
    }
}
if(!swapped)
    break;
}
}
void printvector(  vector<int>&arr){
    int n = arr.size();
    
    for(int i =n-1; i>=n-3;i--){
        cout<<" "<<arr[i]<<" ";}}
int main(){
    vector<int> arr ={ 6,7,9,3,2};
    printvector(arr);
    bubbleshort(arr);
    cout<<"sorted array";
    for(int i =0 ;i<5;i++){
        cout<<arr[i]<<" ";
    }
    printvector(arr);
    return 0;
}