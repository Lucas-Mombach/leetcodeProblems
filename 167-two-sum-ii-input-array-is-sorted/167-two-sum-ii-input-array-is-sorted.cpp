#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int begin,end;
        begin = 0;
        end = numbers.size()-1;
        while(begin != end){
            
            if(numbers[begin]+numbers[end] == target) 
                return {begin+1,end+1};
            if(numbers[begin]+numbers[end] > target) 
                end--;
            else if(numbers[begin]+numbers[end] < target) 
                begin++;
    
        }
        vector<int> result;
        return result;
    }
    
};