#include <bits/stdc++.h>
using namespace std;
        void solve(string s,int i,vector<string> &result){
            if(i==s.size()){
                result.push_back(s);
                return;
            }
            if(isalpha(s[i])){
                s[i] = tolower(s[i]);
                solve(s,i+1,result);
    
                s[i] = toupper(s[i]);
                solve(s,i+1,result);
            }
            else{
                solve(s,i+1,result);
            }
        }
        vector<string> letterCasePermutation(string s) {
            vector<string> result;
            solve(s,0,result);
            return result;
        }
        int main(){
            string s;
            cout<<"Enter a string: ";
            cin>>s;
            vector<string> result = letterCasePermutation(s);
            for(auto x:result){
                cout<<x<<endl;
            }
        }