class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string> > result;
        //此题可以使用排序加上哈希的方法解决
    //     std::map<std::string,std::vector<std::string> > strs_map;
    //     for(std::string s:strs) {
    //         std::string temp = s;
    //         std::sort(s.begin(),s.end());
    //         strs_map[s].push_back(temp);            
    //     }

    //     for(auto s:strs_map) {
    //         result.push_back(s.second);
    //     }

    //     return result;
    // }

    //使用order_map
    unordered_map <string,vector<string> > m;
        for(string& s : strs)
        {
            string t = s;
            sort(t.begin(),t.end());
            m[t].push_back(s);   
        }
        for(auto& n : m)
            result.push_back(n.second);
        return result;
    }
};