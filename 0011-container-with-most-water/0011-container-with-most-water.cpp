class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int last = height.size()-1;
        int max = INT_MIN;
        while(start < last)
        {
            int a = min(height[start] , height[last]);
            cout<<a<<" ";
            int maxi = a * (last - start);
            if(maxi > max)
            {
                max = maxi;
            }
            if(height[start]<height[last])
            {
                start++;
            }
            else
            {
                last--;
            }

        }
        return max;
    }
};