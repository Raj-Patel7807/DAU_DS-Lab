#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int firstUniqChar(string s) {
            int n = s.size();
            unordered_map<char, int> mp;
    
            for(int i=0; i<n; ++i) mp[s[i]]++;
            for(int i=0; i<n; ++i) {
                if(mp[s[i]] == 1) return i;
            }
            return -1;
        }
};

int main() {

    Solution s;

    string str = "leetcode";

    int result = s.firstUniqChar(str);

    if(result != -1) {
        cout << "First unique character is at index: " << result << endl;
    } else {
        cout << "No unique character found." << endl;
    }

    return 0;
}
