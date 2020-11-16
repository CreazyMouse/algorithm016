class Solution {
public:
    string reverseWords(string s) {
        std::string ans;
        std::string temp_str;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(c == ' ') {
                std::reverse(temp_str.begin(), temp_str.end());
                if(!ans.empty())
                    ans = ans+" "+temp_str;                    
                else
                    ans = temp_str;
                temp_str.clear();
            }  else {
                temp_str.push_back(c);
            }
        }
        std::reverse(temp_str.begin(),temp_str.end());
        if(!ans.empty())
            ans = ans + " " + temp_str;
        else
            ans = temp_str;
        return ans;
    }
};