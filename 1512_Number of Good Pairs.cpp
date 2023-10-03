// Brute Force approach
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cgp = 0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) cgp++;
            }
        }
        return cgp;           
    }
};
