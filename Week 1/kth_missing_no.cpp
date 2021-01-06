#include<iostream>
#include<vector>
using namespace std;
int getceil(int dp[],int k,int h){
    int l=0,m;
    while(l<h){
        m=l+(h-l)/2;
        if(dp[m]==k)
        h=m;
        else if(dp[m]>=k)
        h=m;
        else
        {
            l=m+1;
        }    
    }
    if(dp[h]>=k) return l;
    else return -1;
}
int findKthPositive(vector<int>& arr, int k) {
        int n=sizeof(arr)/sizeof(arr[0]);
        int dp[n];
        dp[0]=arr[0]-1;
        for(int i=1;i<n;i++){
            dp[i]=dp[i-1]+(arr[i]-arr[i-1]-1);
        }
        if(k<=dp[0]){
            return k;
        }
        else if(k>dp[n-1]){
            return arr[n-1]+(k-dp[n-1]);
        }
        else
        {
            int id=getceil(dp,k,n);
            if(id!=-1)
            return arr[id]-(dp[id]-dp[id-1]);
        }
        return -1;
}
int main(){
    int k,n;
    vector<int> arr;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<findKthPositive(arr,k);
    return 0;
}