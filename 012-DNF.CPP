#include<iostream>
using namespace std ;
void sort_DMF(int arr[], int n){
    int l =0 ;
    int m =0 ;
    int h = n-1;
    while(m<=h){
        if(arr[m]==0){
            int temp = arr[l];
            arr[l] = arr[m];
            arr[m]= temp;
            cout<<"//"<<arr[m]<<endl;
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
            cout<<"]]"<<arr[m]<<endl;
        }
        else if(arr[m]== 2){
            int vamp = arr[m];
            arr[m]= arr[h];
            arr[h]=vamp;
            h--;
            cout<<";;"<<arr[m]<<endl;
            
        }
    }


}

int main(){
    int n ;
    cin>>n ;
    int arr[n];

    for(int i =0 ; i<n ; i++){
        cin>>arr[i];

    }
    sort_DMF( arr, n);
     for(int i =0 ; i<n ; i++){
        cout<<arr[i];

    }
}