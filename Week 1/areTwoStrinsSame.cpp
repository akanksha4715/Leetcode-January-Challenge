#include<iostream>
using namespace std;
bool sol(string word1[],string word2[],int n){
    string s1,s2;
    for(int i=0;i<n;i++){
    s1.append(word1[i]);
    s2.append(word2[i]);
    }
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2)
    return false;
    else
    {
        for (int i = 0; i < l1; i++)
        {
            if(s1[i]!=s2[i])
            return false;
        }
        return true;
        
    }
    
}
int main(){
    int n;
    cin>>n;
    string word1[n];
    string word2[n];
    for(int i=0;i<n;i++)
    cin>>word1[i];
    for(int i=0;i<n;i++)
    cin>>word2[i];
    if(sol(word1,word2,n))
    cout<<"true";
    else 
    {
        cout<<"false";
    }
    
    return 0;
}