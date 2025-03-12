#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums,int index,vector<int> &cur, vector<vector<int>> &ans){
    ans.push_back(cur);
    for(int i=index;i<nums.size();i++){
        cur.push_back(nums[i]);
        solve(nums,i+1,cur,ans);
        cur.pop_back();
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> cur;
    solve(nums,0,cur,ans);
    return ans;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = subsets(nums);
    for(auto x:result){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}