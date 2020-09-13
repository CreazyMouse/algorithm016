class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //使用map寻找到target的值之差的是否在该map中即可
       std::map<int,int> nums_map;
       std::vector<int> result;
       for(int i = 0; i < nums.size() ; i++) {
           int diff = target - nums[i];
           if(nums_map.find(diff) != nums_map.end()){
               result.push_back(nums_map[diff]);
               result.push_back(i);               
               return result;
           }
           nums_map.insert(std::make_pair(nums[i],i));
       }
       return std::vector<int>{};
    }
};