// median of two sorted arrays
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());

        if (nums3.size() % 2 == 0) {
            int mid = nums3.size() / 2;
            return (nums3[mid - 1] + nums3[mid]) / 2.0;
        } else {
            return nums3[nums3.size() / 2];
        }
    }
};
