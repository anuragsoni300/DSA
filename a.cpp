#include <bits/stdc++.h>
using namespace std;

#define ll long long;
vector<int> arr = {2,7,11,15};
int target = 9;
vector<int> ans;


void solve(vector<int> nums, int target){
    sort(nums.begin(),nums.end());
    int sum = 0,j = nums.size()-1,i = 0;
    while(i<j){
        if(nums[i] + nums[j] == target){
            break;
        }
        else if(nums[i] + nums[j] < target){
            i++;
        }
        else{
            j--;
        }
    }
    for(int k=0;k<nums.size();++k){
        if(nums[k] == arr[i] || nums[k] == arr[j])
            ans.push_back(k);
    }
    cout<<ans[0]<<":"<<ans[1]<<endl;
}

int main(){
    solve(arr, target);
    return 0;
}
