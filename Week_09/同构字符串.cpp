class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.empty() && t.empty()) {
            return true;
        }
        if(s.size() != t.size()) {
            return false;
        }
        //判断首个字母出现的索引是否相同，如果不相同则返回false
        for(int i = 0; i < s.size(); i++) {
            if(s.find(s[i]) != t.find(t[i])) {
                return false;
            }
        }

        return true;
    }
};