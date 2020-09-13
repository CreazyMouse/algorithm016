class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //1.方法1,将两个vector首先合并，然后再进行排序即可
    //     for(int i = 0; i < n; i++) {
    //         nums1[m+i] = nums2[i];
    //     }
    //     std::sort(nums1.begin(),nums1.end());        
    // }
    //2.方法2 采用双指针方法，此方法需要外的与nums1大的数组保存最终结果
    std::vector<int> result(nums1.size());
    int i =0, j = 0;
    int res_index=0;
    while(i < m && j < n){
        if(nums1[i] < nums2[j]){
            result[res_index++] = nums1[i];
            i++;
        }else{
            result[res_index++] = nums2[j];
            j++;
        }
    }

    //当数组有剩余时，则进行搬移
    if(i < m){
        //将nums1中的剩余元素copy到resulate中
        for(; i < m; i++){
            result[res_index++] = nums1[i];
        }
    } else {
        for(; j < n; j++){
            result[res_index++] = nums2[j];
        }
    }

    nums1 = result;
}
};