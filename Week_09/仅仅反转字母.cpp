class Solution {
public:
    string reverseOnlyLetters(string S) {
        //双指针法翻转
        for(int i = 0, j = S.size()-1; i < j; ) {
            if((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')) {
                if((S[j] >= 'a' && S[j] <= 'z') || (S[j] >= 'A' && S[j] <= 'Z')) {
                    //翻转
                    char temp = S[i];
                    S[i] = S[j];
                    S[j] = temp;
                    i++;j--;
                } else {
                    j--;
                }
            } else {
               if((S[j] >= 'a' && S[j] <= 'z') || (S[j] >= 'A' && S[j] <= 'Z')) {
                   i++;
               }else {
                   i++;
                   j--;
               }
            }
        }
        return S;
    }
};