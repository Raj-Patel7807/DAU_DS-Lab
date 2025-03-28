#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> topKFrequent(vector<int>& a, int k) {
            int n = a.size();
    
            vector<int> ans;
            map<int, int> mp;
            for(int i=0; i<n; i++) mp[a[i]]++;
    
            vector<pair<int, int>> vp(mp.begin(), mp.end());
            sort(vp.begin(), vp.end(), [](pair<int, int>& a, pair<int, int>& b) {
                return a.second > b.second;
            });
    
            int i = 0;
            while(k--) ans.push_back(vp[i++].first);
    
            return ans;
        }
};

int main() {

    Solution s;

    vector<int> a = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = s.topKFrequent(a, k);

    cout << "Top " << k << " frequent elements: ";
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
