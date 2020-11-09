class Solution {
public:
    bool isAnagram(string s, string t) {
        //1.暴力法，对两个数据分辨排序，然后判断字符串是否相等
        // std::sort(s.begin(),s.end());
        // std::sort(t.begin(),t.end());
        // return s == t;
         //2.使用hash的方法，由于仅有26个字母，则可以虚拟出一个数组
         if(s.size() != t.size()) {
             return false;
         }
         int contours[26]={0};
         for(int i=0; i < s.size(); i++) {
             contours[s[i] - 'a'] ++;
             contours[t[i] - 'a'] --;
         }

         //判断是否均为0
         for(int contour:contours) {
             if(0 != contour) {
                 return false;
             }
         }

         return true;
    }
};