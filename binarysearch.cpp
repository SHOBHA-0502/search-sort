#include<bits\stdc++.h>
using namespace std ;
int binary_search(int arr[],int n ,int x){
    int start =0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==x){
            return mid;

        }
        else if(arr[mid]>x){
            end = mid-1;
        }
        else if(arr[mid]<x){
            start = mid+1;
        }

    }
    return -1;

}

int main(){
    int n ;
    cin>>n ;
    int arr[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<< binary_search(arr,n,x)<<endl;
}