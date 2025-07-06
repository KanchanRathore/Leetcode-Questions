class Solution {
public:
int findLucky(vector<int>& arr) {
    unordered_map<int,int>m;
    for(int i =0; i<=arr.size()-1; i++)
    {

       m[arr[i]]++;
    }
    int max = -1;
    for(auto k :m)
    {

        if(k.first == k.second && k.second>max)
        {

            max = k.second;

        }
    }

    return max;
}
};