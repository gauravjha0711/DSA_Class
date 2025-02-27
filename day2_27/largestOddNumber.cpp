#include <iostream>
using namespace std;

string largestOddNumber(string num) {
    for (int i = num.length() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            return num.substr(0, i + 1);
        }
    }
    return "";        
}

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num;
    
    string largestOdd = largestOddNumber(num);
    cout << "Largest odd number: " << largestOdd << endl;
    
    return 0;
}