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

// Optimized Approach(Best one) ( T.C.= O(n) : S.C. = O(1) )
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> freq(102);

        for(auto i:nums){
            freq[i]++;
        }

        int cgp = 0;

        for(auto i:freq){
            cgp += (i * (i-1))/2;   //Since after finding count of same numbers we have to use formula nC2
        }

        return cgp;
    }
};


// Better approach using unordered map
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cgp = 0;
        unordered_map<int, int> freq;

        for(auto i:nums){
            cgp += freq[i]++;
        }

        return cgp;
    }
};
