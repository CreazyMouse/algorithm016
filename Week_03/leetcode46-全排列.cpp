class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& output, int first, int len){
        // 所有数都填完了
        if (first == len) {
            res.push_back(output);
            return;
        }
        for (int i = first; i < len; ++i) {
            // 动态维护数组
            std::swap(output[i], output[first]);
            // 继续递归填下一个数
            backtrack(res, output, first + 1, len);
            // 撤销操作
            std::swap(output[i], output[first]);
        }
    }
    std::vector<std::vector<int> > permute(std::vector<int>& nums) {
        std::vector<std::vector<int> > res;
        backtrack(res, nums, 0, (int)nums.size());
        return res;
    }
};