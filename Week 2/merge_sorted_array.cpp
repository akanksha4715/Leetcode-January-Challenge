#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        vector<int> aux;
        int i=0,j=0;
        while(i<m && j<n){
            if(num1[i]<num2[j])
            {
                aux.push_back(num1[i]);
                i++;
            }
            else
            {
                aux.push_back(num2[j]);
                j++;
            }            
        }
        while(i<m){
            aux.push_back(num1[i]);
            i++;
        }
        while(j<n){
            aux.push_back(num2[j]);
            j++;
        }
        num1=aux;
        int l=num1.size();
        for(int i=0;i<l;i++){
            cout<<num1[i];
        }

}
int main(){
    int m,n;
    cin>>m>>n;
    vector<int> num1,num2;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        num1.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        num2.push_back(x);
    }
    merge(num1,m,num2,n);
    return 0;
}
