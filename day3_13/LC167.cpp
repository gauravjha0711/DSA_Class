#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    int i=0;
    vector<int> ans;
    int j=numbers.size()-1;
    while(i<j){
        if(numbers[i]+numbers[j]==target){
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        }
        else if(numbers[i]+numbers[j]>target){
            j--;
        }
        else{
                i++;
        }
    }
    return ans;
}
int main(){
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(numbers,target);
    for(auto x:result){
        cout<<x<<" ";
    }
}