#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int ls(string str){
	int n= str.length();
    int res=0;
	for(int i=0;i<n;i++){
        vector<bool> chk(256);
        for(int j=i;j<n;j++){
            if(chk[str[j]]==true){
                break;
            }
            else
            {
                int maxx=j-i+1;
                res=max(maxx,res);
                chk[str[j]]=true;
            }           
        }
    }
	return res;
}
int main(){
    string s;
    getline(cin,s);
    cout<<ls(s);
    return 0;
}
