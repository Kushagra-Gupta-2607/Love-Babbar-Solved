//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n = nums.size(), a = 0, b = 0, pos = 1;
        for(int i = 0; i<n; i++) a = a^nums[i];
        
        pos = a & ~(a-1);
        
        for(int i = 0; i<n; i++){
            if(nums[i]&pos) b = b^nums[i];
        }
        a = a^b;
        return {min(a, b), max(a, b)};
    }
};
