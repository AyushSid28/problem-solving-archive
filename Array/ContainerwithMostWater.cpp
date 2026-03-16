class Solution{
    public:
       int maxArea(vector<int>& height){
         int n=height.size();
         int maxArea=0;
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int area=(j-i)*min(height[i],height[j]);
                maxArea=max(maxArea,area);
            }
         }
         return maxArea;
       }
}



//Using 2-pointer

class Solution{
    public:
      int maxArea(vector<int>& height){
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxArea=0;
        while(left<right){
            int area=(right-left)*min(height[left],height[right]);
            maxArea=max(maxArea,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
      }
}