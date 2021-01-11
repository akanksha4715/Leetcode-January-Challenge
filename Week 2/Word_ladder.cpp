#include<iostream>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
int ladderLength(string beginWord, string endWord, vector<string>& wordList) {  
    set<string> sett;
    queue<string> q;
    bool present=false;
    int l=wordList.size();
    for(int i=0;i<l;i++){
    sett.insert(wordList[i]);
    if(wordList[i]==endWord)
    present=true;
    }
    if(!present)
    return 0;
    sett.erase(beginWord);
    q.push(beginWord);
    int res=0;
    while (!q.empty())
    {
        res++;     
        int level=q.size();   
        while (level--)
        {
            string curr=q.front();
            q.pop();
            int len=curr.length();
            for(int i=0;i<len;i++){
            string temp=curr;
            for(char j='a';j<='z';j++){
                temp[i]=j;
                if(temp.compare(endWord)==0)
                return res+1;

                else if(temp.compare(curr)==0)
                continue;

                else if(sett.find(temp)!=sett.end()){
                    q.push(temp);
                    sett.erase(temp);          
                }
            }
        }
        }    
    }
    return 0;

}
int main(){
    string beginWord = "hit", endWord = "cog";
    vector<string> wordList = {"hot","dot","dog","lot","log"};
    cout<<ladderLength(beginWord,endWord,wordList);
    return 0;
}