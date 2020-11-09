class Solution {
public:
    int hammingWeight(uint32_t n) {
        //按位与计算
        int num=0;
        while(n != 0) {
            num++;
            n &= (n-1);
        }
        return num;
    }
};