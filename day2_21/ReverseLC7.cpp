#include<iostream>
#include<limits.h>
using namespace std;
int reverse(int x) {
    int r;
    int n=x;
    int s=0;
    while(n!=0){
        r=n%10;
        if((s>INT_MAX/10) || (s<INT_MIN/10)){
            return 0;
        }
        s=s*10+r;
        n/=10;
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<reverse(n)<<endl;
}