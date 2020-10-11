class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (int bill:bills) {
            if( 5 == bill) {
                five++;
            }else if(10 == bill) {
                if(0 == five) {
                    return false;
                } else {
                    ten++;
                    five--;
                }
            } else {
                if(five > 0 && ten > 0) {
                    five--;
                    ten--;
                } else if(five >= 3) {
                    five-=3;
                } else {                    
                   return false; 
                } 
            }
        }
        return true;
    }
};