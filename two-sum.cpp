#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            
            // Brute force approach O(n^2);
            // for(int i=0; i<n-1; ++i) {
            //     for(int j=i+1; j<n; ++j) {
            //         if(nums[i]+nums[j]==target) {
            //             return {i, j};
            //         }
            //     }
            // }
            // return {};
            
            // Hashing approach O(n);
            map<int, pair<int, int>> mp;
            for(int i=0; i<n; i++) {
                int x = target - nums[i];
                if(mp[x].first > 0) {
                    return {i, mp[x].second};
                } else {
                    mp[nums[i]].first++;
                    mp[nums[i]].second = i;
                }
            }
            return {};
        }
};

int main() {

    Solution s;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = s.twoSum(nums, target);

    cout << "Indices: ";
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
