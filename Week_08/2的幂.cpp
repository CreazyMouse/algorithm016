class Solution {
public:
    bool isPowerOfTwo(int n) {
        //1.循环取2的余数，然后除以2
        //  if (n == 0) 
        //     return false;
        //  while (n % 2 == 0)
        //   n /= 2;
        // return n == 1;
        //2.位运算，2的幂次方中，该数的二进制中仅能有1位为1
        if(0 == n)
            return false;
        long x = (long)n;
        return (x & (x-1)) == 0;

    }
};