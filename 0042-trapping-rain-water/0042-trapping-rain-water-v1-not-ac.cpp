class Solution {
public:
    int trap(vector<int>& height) {
        int maxheight = 0;
        int result = 0;
        // 找到最高
        for (int i = 0; i < height.size(); i++) {
            if (height[i] > maxheight)
                maxheight = height[i];
        }
        // 從第一層開始找空的
        for (int level = 1; level <= maxheight; level++) {
            //從最左開始找到 > level 的牆壁
            int left = -1;
            for(int i = 0;i < height.size();i++){
                if(height[i] >= level){
                    left = i;
                    break;
                }
            } 
            //從最右開始找到 > level 的牆壁
            int right = -1;
            for(int i = height.size() - 1;i >= 0;i--){
                if(height[i] >= level){
                    right = i;
                    break;
                }
            }
            for(int i = left + 1;i < right;i++){
                if(height[i] < level){
                    result++;
                }
            }
        }

        return result;
    }
};

/*
result = 0
找到最高的地方
把上面遮住(只看那一排)，找有被包住的，找到一個就result+1，並把可以裝水的那格+1
再繼續找下一層
直到找到最高
時間複查度 O(nh)
n是陣列長度
h是總高度
空間複雜度 O(1)
*/