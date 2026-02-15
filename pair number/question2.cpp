#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    sort(nums.begin(), nums.end());   // IMPORTANT

    int i = 0, j = nums.size() - 1;

    while(i < j){
        int sum = nums[i] + nums[j];

        if(sum > target){
            j--;
        }
        else if(sum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,5};
    int target = 16;

    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << " , " << ans[1];

    return 0;
}
