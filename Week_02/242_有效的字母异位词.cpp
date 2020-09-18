class Solution {
public:
    bool isAnagram(string s, string t) {
        // //1.暴力法，对数组进行排序，然后比较两个数据是否相等
        // std::sort(s.begin(),s.end());
        // std::sort(t.begin(),t.end());
        // return s==t;
        //2.方法2，采用hash的方法，记录每个字母出现的次数
        if(s.size() != t.size()) {
            return false;
        }
        int calclulate_chars[26]={0};
        for(int i=0; i < s.size(); i++) {
            calclulate_chars[s[i]-'a']++;
        }

        for(int i=0; i < t.size(); i++) {
            calclulate_chars[t[i]-'a']--;
            if(calclulate_chars[t[i] - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};