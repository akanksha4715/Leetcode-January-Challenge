#include<iostream>
#include<cmath>
using namespace std;
int findfloor(int arr[],int key,int r){
    int l=0;
    while(l<r){
        int m=l+(r-l)/2;
        if(arr[m]<key)
        l=m;
    }
}
int findceil(int arr[],int key,int n){

}
void insertat(int *num,int id,int key){
    int n=sizeof(num)/sizeof(num[0]);
    for(int i=n;i>id;i--){
        num[i]=num[i-1];
    }
    num[id]=key;
}
int findcost(int arr[],int n){
    int num[n];
    int cost=0;
    int res;
    num[0]=arr[0];
    for(int i=1;i<n;i++){
        int key=arr[i];
        int m=sizeof(num)/sizeof(num[0]);
        int floorid=findfloor(num,key,m)+1;
        int ceilid=findceil(num,key,m);
        int lar=m-ceilid;
        insertat(num,floorid,key);
        cost+=min(floorid,lar);
    }
    return cost;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<findcost(arr,n);
    return 0;
}