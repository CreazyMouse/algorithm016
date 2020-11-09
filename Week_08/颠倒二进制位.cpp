class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //1.n&1 取最后一位，然后左移31-i,再将n右移一位
        uint32_t ret = 0, index = 0;
        while( 0 != n) {
            ret += (n&1)<<(31-index);
            index++;
            n = n>>1;
        }

        return ret;
    }
};