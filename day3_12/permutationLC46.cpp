#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums, int index, vector<vector<int>> &ans){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[i],nums[index]);
        solve(nums, index+1, ans);
        swap(nums[i],nums[index]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    solve(nums,0,ans);
    return ans;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = permute(nums);
    for(auto x:result){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}