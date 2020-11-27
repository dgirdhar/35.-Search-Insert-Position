class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result = -1;
        int start = 0;
        int end = nums.size() - 1;
        
        while (start <= end) {
            if (start == end) {
                result = target <= nums[start] ? start : start + 1;
                break;
            }
            else {
                int mid = start + ((end - start) / 2);
                
                if (nums[mid] == target) {
                    result = mid;
                    break;
                }
                else {
                    if (target < nums[mid]) {
                        end = mid - 1;
                    }
                    else {
                        start = mid + 1;
                    }
                }
            }
        }
        
        if (result == -1) {
            result = start;
        }
        return result;
    }
};
