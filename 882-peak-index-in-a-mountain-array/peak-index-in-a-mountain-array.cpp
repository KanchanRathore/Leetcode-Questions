class Solution {
private:
    int findindex(vector<int>& arr, int s, int e)
    {
        
        if(s == e)
        {
            return s;
        }
        int mid = s+(e-s)/2;

        if(arr[mid]>arr[mid+1])
        {
           return findindex(arr,s,mid);
        }
        else
        {
           return findindex(arr,mid+1,e);
        }

    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return findindex(arr,0,arr.size()-1);
        
        
    }
};