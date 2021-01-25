#include<iostream>
#include<vector>
using namespace std;
bool kLengthApart(vector<int>& nums, int k) {
        int count=0,i,start=-1;
        int n=nums.size();
        for (i = 0; i < n; i++)
        {
            if(nums[i]==1)
            {
                start=i;
                break;
            }
        }
        if(start==-1)
        return true;

        for ( i = start+1; i < n; i++)
        {
            if(nums[i]==0)
            count++;
            else 
            {
                if(count>=k)
                count=0;
                else
                return false;
            }
            
        }
        return true;
        
    }
int main(){
    vector<int> nums;
    int k;
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    if (kLengthApart(nums,k))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    } 
    return 0;
}
