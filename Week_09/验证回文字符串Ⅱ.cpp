class Solution {
public:
    bool checkPalindrome(const string& s, int low, int high) {
        //验证是否是回文
       for (int i = low, j = high; i < j; ++i, --j) {
          if (s[i] != s[j]) {
            return false;
          }
     }
        return true;
    }
    bool validPalindrome(string s) {    
    //双指针，一个指针从头往中间挪动，一个从尾往中间挪动
    //1.如果两个指针指向的字符相同，则继续往下走，lower+1,hight-1
    //2.如果两个字符不相同，则需lower+1或者是hight-1然后验证中间的字符是否是回文
    int lower = 0, high = s.size()-1;
    while(lower < high) {
        if(s[lower] == s[high]) {
            lower++;
            high--;          
        } else {
            bool b_lower, b_high;
            lower++;
            b_lower = checkPalindrome(s,lower,high);
            if(b_lower) {
                return true;
            }

            high--;
            lower--;
            b_high = checkPalindrome(s,lower,high);
            if(b_high) {
                return true;
            }
            return false;
        }        
     }
     return true;
   }
};