class FindSumPairs {
public:
    unordered_map<int,int>m;
    vector<int>v1;
    vector<int>v2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        v1 = nums1;
        v2 = nums2;
        for(auto i: v2)
        {
            m[i]++;
        }
    }
    
    void add(int index, int val) {
        m[v2[index]]--;
        v2[index] = v2[index]+val;
        m[v2[index]]++;
    }
    
    int count(int tot) {
        int ans = 0;
        for(auto j: v1)
        {
             ans = ans+m[tot-j];
        }
        return ans;
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */