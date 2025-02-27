#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
void subString(string s, int i, int n){
    if(n==0){
        return;
    }
    if(i==n){
        subString(s, 0, n-1);
        return;
    }
    cout<<s.substr(i, n)<<endl;
    subString(s, i+1, n);
}
string reverseWords(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    string res;
    for (int i = words.size() - 1; i >= 0; i--) {
        res += words[i];
        if (i != 0) {
            res += " ";
        }
    }

    return res;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    // subString(s, 0, s.length());
    string ss = reverseWords(s);
    cout<<ss<<endl;
}