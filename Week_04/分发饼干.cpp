class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //贪心算法，每次满足最小胃口的孩子
        //知道饼干分完或者是孩子都分到了饼干
        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());
        int i = 0, j = 0, result = 0;
        while(i < g.size() && j < s.size()) {
            if(s[j] >= g[i]) {
                //此时该孩子分得一块饼干，j++, i++
                i++; j++; result++;                
            }else {
                j++;
            }
        }
        return result;
    }
};