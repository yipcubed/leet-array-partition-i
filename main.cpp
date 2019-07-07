#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


#include "../utils/VectorUtils.hpp"

// https://leetcode.com/problems/array-partition-i/

// #include "../utils/TreeUtils.hpp"

#include "../utils/PrintUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto _no_sync_ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size() - 1; i += 2) {
            sum += nums[i];
        }
        return sum;
    }
};

void test1() {
    vector<int> v1{1,2,3,4};
    cout << "4 ? " << Solution().arrayPairSum(v1) << endl;

    vector<int> v2{1,2,3,4,5,6};
    cout << "9 ? " << Solution().arrayPairSum(v2) << endl;
}

void test2() {

}

void test3() {

}