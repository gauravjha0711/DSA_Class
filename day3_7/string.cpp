#include<iostream>
#include<vector>
using namespace std;
int solve(string& s, vector<int>& freq, int index, int maxFreq) {
    if (index == s.length()) return maxFreq;
    freq[s[index] - 'a']++;
    maxFreq = max(maxFreq, freq[s[index] - 'a']);
    return solve(s, freq, index + 1, maxFreq);
}

int countMaxCharInString(string s) {
    vector<int> freq(26, 0);
    return solve(s, freq, 0, 0);
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"Maximum count : "<<countMaxCharInString(s);
}