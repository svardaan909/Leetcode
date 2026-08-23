class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowsum = 0;
        int n = nums.size();

        for(int i=0; i<k; i++){
            windowsum += nums[i];
        }
        int maxsum =  windowsum;

        for(int i=k; i<n; i++){
            windowsum += nums[i];
            windowsum -= nums[i-k];

            maxsum = max(maxsum, windowsum);
        }
        return (double)maxsum/k;
    }
};