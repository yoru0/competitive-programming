#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int> &nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxx = -1;

        for (int num : nums) {
            if (num > 0 && numSet.count(-num))
                maxx = max(maxx, num);
        }
        return maxx;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}