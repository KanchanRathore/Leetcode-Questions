class Solution {
public:
    int strStr(string haystack, string needle) {

        int b = haystack.find(needle);
        cout<<b<<endl;
        return b;
        
    }
};