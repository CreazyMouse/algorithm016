class Solution {
public:
// //1.方法1，暴力求解法，移动K次，每次移动一格
// //结果超时
//     void rotate(vector<int>& nums, int k) {
//         int pre_num,temp_num;
//         for(int i = 0; i < k; i++) {
//             //记录最后一个元素
//             pre_num = nums.back();
//             for(int j = 0;j < nums.size(); j++) {
//                 temp_num = nums[j];
//                 nums[j] = pre_num;
//                 pre_num = temp_num;
//             }
//         }
//     }
// 方法2 以空间换取时间的方式，另起一个vector,然后将i处的数据放置在(i+k)%(nums.size())的位置chu
// 即可，然后再将后面生成的数据copy至原始数组即可
        // void rotate(vector<int>& nums, int k) {
        //     std::vector<int> roate_vec(nums.size());
        //     //首先进行移位操作
        //     for(int i = 0; i < nums.size(); i++) {
        //         roate_vec[(i+k)%nums.size()] = nums[i];
        //     }
        //     //再次赋值
        //     for(int j = 0; j < nums.size(); j++){
        //         nums[j] = roate_vec[j];
        //     }
        // }
// 方法3 翻转3次数据，首先对所有的数据进行翻转，然后翻转前K=k%n个数字，再翻转后面n-k个数字
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()) {return;}
        k = k % nums.size();
        std::reverse(nums.begin(),nums.end());
        std::reverse(nums.begin(),nums.begin()+k);
        std::reverse(nums.begin()+k,nums.end());
    }

};