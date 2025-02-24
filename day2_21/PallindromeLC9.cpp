#include<iostream>
#include<limits.h>
using namespace std;
bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int n=x;
    int s=0;
    while(n!=0){
        int r=n%10;
        if((s>INT_MAX/10) || (s<INT_MIN/10)){
            return 0;
        }
        s=s*10+r;
        n/=10;
    }
    if(s==x){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<isPalindrome(n)<<endl;
}