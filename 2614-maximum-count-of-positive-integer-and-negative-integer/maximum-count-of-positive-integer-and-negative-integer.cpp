class Solution {
    private:
     int findFirstPositive(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] > 0) right = mid - 1;  // Search left
            else left = mid + 1;  // Search right
        }
        return left;  // First index where nums[i] > 0
    }

    // Binary search to find the first zero (or first non-negative number)
    int findFirstZero(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] < 0) left = mid + 1;  // Search right
            else right = mid - 1;  // Search left
        }
        return left;  // First index where nums[i] == 0 or greater
    }

public:
    int maximumCount(vector<int>& nums) {
        int firstPositiveIndex = findFirstPositive(nums);
        int firstZeroIndex = findFirstZero(nums);
        int neg_count = firstZeroIndex;  // Count of negative numbers
        int pos_count = nums.size() - firstPositiveIndex;  // Count of positive numbers
        return max(neg_count, pos_count);
    }
};