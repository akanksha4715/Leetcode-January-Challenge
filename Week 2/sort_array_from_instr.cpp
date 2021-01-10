#include<iostream>
#include<cmath>
#include<vector>
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
int findceil(int arr[],int key,int r){
    int l=0;
    if(arr[r]<=key)
    return -1;
    while(l<r){
        int m=l+(r-l)/2;
        if(arr[m]<=key)
        l=m+1;
        else
        {
            r=m;
        }
        
    }
    return l;
}
void insertat(int *num,int id,int key,int n){
    for(int i=n;i>id;i--){
        num[i]=num[i-1];
    }
    num[id]=key;
}
int findcost(vector<int> arr){
    int n=arr.size();
    int num[n];
    int cost=0,m=1;
    int res,lar;
    num[0]=arr[0];
    for(int i=1;i<n;i++){
        int key=arr[i];
        
        int floorid=findfloor(num,key,m-1)+1;
        //cout<<floorid<<endl;
        int ceilid=findceil(num,key,m-1);
        if(ceilid>=0)
        lar=m-ceilid;
        else
        {
            lar=0;
        }
        cost+=min(floorid,lar);
        insertat(num,floorid,key,m);
        m++;
        
    }
    // for(int i=0;i<n;i++)
    // cout<<num[i]<<" ";n
    return cost;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<findcost(arr);
    return 0;
}