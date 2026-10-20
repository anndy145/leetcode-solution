class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> result;
        for(int i = sqrt(area);i > 0;i--){
            if(area % i == 0){
                result.push_back(area / i);
                result.push_back(i);
                return result;
            }
        }

       return{}; 
    }
};