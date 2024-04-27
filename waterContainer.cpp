//container with most water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int leftPointer=0;
        int rightPointer=height.size()-1;
        while(leftPointer< rightPointer){
            int width=rightPointer-leftPointer;
            int minHeight= min(height[leftPointer],height[rightPointer]);
            int area=width*minHeight;
            maxArea=max(maxArea,area);
            if(height[leftPointer]<height[rightPointer]){
                leftPointer++;
            }
            else{
                rightPointer--;
            }

        }
        return maxArea;

    }
};
