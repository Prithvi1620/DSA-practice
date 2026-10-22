class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actSum = 0 ;
        int n = nums.size() ;
        int sum = n * (n+1) / 2 ;
        for(int i =0 ; i < n ; i++){
            actSum += nums[i] ;
        }
        return sum - actSum ;
    }
};