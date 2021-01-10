#include<iostream>
#include<cmath>
using namespace std;
int findfloor(int arr[],int key,int r){
    int l=0;
    if(arr[0]>=key)
    return -1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]>=key)
        r=m-1;
        else
        {
            l=m+1;
        }
        
    }
    return l-1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findfloor(arr,k,n-1);
    return 0;
}