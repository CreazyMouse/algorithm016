class Solution {
public:
    int firstUniqChar(string s) {
        //方法1：hash map
        // std::map<char,int> s_map;
        // for(char c:s) {
        //     if(s_map.find(c) != s_map.end()) {
        //         s_map[c]++;
        //     } else {
        //         s_map[c] = 1;
        //     }
        // }
        // for(int i = 0; i < s.size(); i++ ) {
        //     if(s_map[s[i]] == 1) {return i;}
        // }
        // return -1;
        //方法2 使用数组
        int char_num[26]={0};
        for(char c:s) {
            char_num[c-'a']++;
        }

        for(int i=0; i < s.size(); i++) {
            if(char_num[s[i] - 'a'] == 1) {
                return i;
            }           
        }

        return -1;
    }
};