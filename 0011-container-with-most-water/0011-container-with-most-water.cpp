class Solution {
public:
    int maxArea(vector<int>& height) {
        int st = 0;
        int en = height.size()-1;
        
        int water = 0;
        
        while(st<en){
            
            int area = min(height[st],height[en])*(en-st);
            
            water = max(water, area);
            
            if(height[st]< height[en])st++;
            
            else en--;
        }
        
        return water; 
    }
};