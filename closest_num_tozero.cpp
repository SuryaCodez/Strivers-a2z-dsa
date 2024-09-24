class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest_num = INT_MAX;
        int num;
        /*if(num==0){
            return num;
        }
        if(num==1){
            return num;
        }*/
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(abs(nums[i])<abs(closest_num)||(abs(nums[i])==abs(closest_num)&&nums[i]>closest_num)){
                closest_num=nums[i];
            }
        }
        return closest_num;
    }
};
