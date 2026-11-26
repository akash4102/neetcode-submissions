class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        int result = -1;
        while(i<=j){
           int mid = (i+j)/2;
           if(nums[mid]==target){
                result=mid;
                break;
            }
           if(nums[mid]>target){
                j=mid-1;
            }
           if(nums[mid]<target){
               i=mid+1;
            }
        }
        return result;
    }
};
