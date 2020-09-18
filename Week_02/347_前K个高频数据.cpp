class Solution {
public:
    //定义小顶堆的比较函数
    static bool cmp(std::pair<int,int> m , std::pair<int, int> n) {
        return m.second > n.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
          //首先使用unorder_map记录每个数字出现的次数
          std::unordered_map<int,int> num_frequent_map;
          for(int num : nums) {
              num_frequent_map[num] ++;
          }
          //建立小顶堆,当堆的元素个数小于k时，直接插入,当进入的数字小于
          //堆顶元素时，舍弃当前值，当前值大于堆顶元素值时，则将堆顶的数字弹出，插入当前值
          priority_queue<std::pair<int,int>, std::vector<std::pair<int, int>>, decltype(&cmp)> small_heap(cmp);          
          for(std::pair<int,int> element:num_frequent_map) {
              if(small_heap.size() < k) {
                  small_heap.emplace(element.first, element.second);
              }else if( small_heap.size() == k) {
                  if (small_heap.top().second < element.second) {
                      small_heap.pop();
                      small_heap.emplace(element.first,element.second);
                  }                  
              }
          }
            //遍历输出
            std::vector<int> top_kfrequent;
            while (!small_heap.empty()) {
            top_kfrequent.push_back(small_heap.top().first);           
            small_heap.pop();
        }
        return top_kfrequent;
    }
};