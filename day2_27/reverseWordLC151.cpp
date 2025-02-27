#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

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

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    string reversed = reverseWords(s);
    cout << "Reversed words: " << reversed << endl;
    
    return 0;
}
