class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        //1.使用set记录obstacles
        std::set<std::pair<int,int>> obstacles_set;
        for (std::vector<int> obs:obstacles) {
            obstacles_set.insert(std::make_pair(obs[0],obs[1]));
        }
        // 记录不同方向运动时机器人的运动方向
        //假设机器人的初始状态中其方向为笛卡尔坐标系中的y轴正方向
        //逆时针旋转一周
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        int res = 0;
        //初始朝向为y轴正方向 
        int direction=0;
        int curr_x = 0, curr_y = 0;
        for (int comm:commands) {
            if(-2 == comm) {
                direction = (direction+3) % 4;
            }else if (-1 == comm) {
                direction = (direction+1) % 4;
            } else {
                for (int i=0; i < comm; i++ ) {
                int x = curr_x + dx[direction];
                int y = curr_y + dy[direction];
                if(obstacles_set.find(make_pair(x,y)) == obstacles_set.end()) {
                    //此时到达障碍物
                    curr_x = x;
                    curr_y = y;                 
                    res = std::max(res,curr_y*curr_y+curr_x*curr_x);
                }
                }                
            }
        }
        return res; 
    }
};