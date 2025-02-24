#include<iostream>
#include<vector>
using namespace std;
vector<string> fizzBuzz(int n) {
    vector<string> v;
    for(int i=1;i<=n;i++){
        if(i<3){
            v.push_back(to_string(i));
        }
        else if(i%3==0 && i%5==0){
            v.push_back("FizzBuzz");
        }
        else if(i%3==0){
            v.push_back("Fizz");
        }
        else if(i<5){
            v.push_back(to_string(i));
        }
        else if(i%5==0){
            v.push_back("Buzz");
        }
        else{
            v.push_back(to_string(i));
        }
    }
    return v;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<string> v = fizzBuzz(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}