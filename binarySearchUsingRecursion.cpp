#include <iostream>
#include <vector>
using namespace std;
int* binarySearch(vector<int> &arr,int start, int end,int x){
    if(start==end && x!=arr[start]){
        cout<<"not found ";
        return &arr[0];
    }
    else if(x==arr[start+(end-start)/2]){
        cout<<"found at index ";
        return &arr[start+(end-start)/2];
    }
    else if(arr[start+(end-start)/2]<x){
        return binarySearch(arr,1+start+(end-start)/2,end,x);
    }
    else if(arr[start+(end-start)/2]>x){
        return binarySearch(arr,start,start+(end-start)/2,x);
    }
    return &arr[0];
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"please give a sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"give the number you want to find"<<endl;
    int find;
    cin>>find;
    cout<<"The number "<<find<<" is "<<binarySearch(arr,0,arr.size()-1,find)-&arr[0];
    return 0;
}
