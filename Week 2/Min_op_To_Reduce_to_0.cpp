#include<iostream>
#include<map>
using namespace std;
int sol(int arr[],int x,int i,int j){
    map<string,int> aux;
    string key=to_string(x)+"&"+to_string(i)+"&"+to_string(j);
    if(aux.count(key))
    return aux[key];
    else{
    if(x==0)
    return 0;
    if(x<0)
    return INT16_MAX;
    if(i+1==j){
        if(x-arr[i]==0 || x-arr[j]==0)
        return 1;
        if(x-arr[i]-arr[j]==0)
        return 2;
        else
        {
            return INT16_MAX;
        }       
    }
    aux[key]= 1+min(sol(arr,x-arr[i],i+1,j),sol(arr,x-arr[j],i,j-1));
    return aux[key];
    }
    
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=sol(arr,x,0,n-1);
    if(res>=INT16_MAX)
    cout<<-1;
    else
    {
        cout<<res;
    }
    return 0;
}