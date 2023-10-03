// Brute force approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;    
    }
};


// Better approach( T.C.= O(n)+O(nlogn) , S.C.=O(1) ) 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]) return true;
        }
        return false;   
    }
};


//Using HashMap( T.C.=O(n), S.C.= O(n) )
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto i:nums){
            if(mp[i] >= 1) return true;

            mp[i]++;
        }
        return false;   
    }
};


// Using Hashset
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> checker;

        for(auto i:nums){
            if(checker.count(i) > 0){
                return true;
            }
            checker.insert(i);
        }
        return false;   
    }
};
