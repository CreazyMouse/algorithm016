class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //采用一遍hash的方法，首先
        std::map<int,int> two_sum_map;
        std::vector<int> return_index;
        for(int i = 0; i <nums.size() ;i++){
            int diff = target - nums[i];
            if(two_sum_map.find(diff) != two_sum_map.end()){
                return_index.push_back(two_sum_map[diff]);
                return_index.push_back(i);
                return return_index;
            }
            two_sum_map.insert(std::make_pair(nums[i],i));
        }
        return return_index;
    }
};