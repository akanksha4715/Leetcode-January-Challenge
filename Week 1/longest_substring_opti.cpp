#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int ls(string str){
	int n= str.length();
	int i=0,res=0,maxx;
	vector<int> prev(256,-1);
	for(int j=0;j<n;j++){
		i=max(i,prev[str[j]]+1);
		maxx=j-i+1;
		res=max(res,maxx);
		prev[str[j]]=j;
	}
	return res;
}
int main(){
    string s;
    getline(cin,s);
    cout<<ls(s);
    return 0;
}
