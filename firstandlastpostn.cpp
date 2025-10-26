class Solution {
public:
    int start(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1, first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;  
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return first;
    }

    int end(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1, last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1; 
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = start(nums, target, n);
        if (first == -1) return {-1, -1};
        int last = end(nums, target, n);
        return {first, last};
    }
};
