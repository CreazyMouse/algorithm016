class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        //1.暴力对比，如果arr1中的数值与arr2中的数值相同时则交换
        //arr1中此时数据的位置与tmp位置数据，同事tmp+1
        int tmp = 0;
        for(int i = 0;i<arr2.size();++i) {
           for(int j = tmp;j<arr1.size();++j){
               if(arr1[j] == arr2[i]){
                   swap(arr1[j],arr1[tmp]);
                    ++tmp;
               }
           }
        }
        sort(arr1.begin()+tmp,arr1.end());
        return arr1;
    }
};