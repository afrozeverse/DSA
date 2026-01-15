// LINK: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//PROBLEM NUMBER: 167

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size(),i,j,sum=0;
        vector<int> result;
        i=0;
        j=n-1;
        while(i<j)
        {
            sum=numbers[i]+numbers[j];
            if(sum==target)
            {
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }
            if(sum<target)
            i++;
            else if(sum>target)
            j--;
        }
        return result;
    }
};