#include<iostream>
using namespace std;
int getmax(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int num[n+1];
    num[0]=0;num[1]=1;
    int maxx=1,k=n/2,count=2;
    for(int i=1;i<=k;i++){
        if(count<n+1){
            num[2*i]=num[i];
            count++;
            maxx=max(maxx,num[2*i]);
        }
        if(count<n+1){
            num[2*i+1]=num[i]+num[i+1];
            count++;
            maxx=max(maxx,num[2*i+1]);
        }
    }
    return maxx;
}
int main(){
    int n;
    cin>>n;
    cout<<getmax(n);
    return 0;
}