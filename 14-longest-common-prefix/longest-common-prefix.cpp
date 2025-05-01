class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str;
        int minlength = strs[0].length();
        for(int k = 0; k<=strs.size()-1; k++)
        {
            if(strs[k].length()<minlength)
            {
                minlength = strs[k].length();
            }
        }
        for(int i = 0; i<= minlength-1; i++)
        {
            for(int j = 1; j<=strs.size()-1; j++)
            {
                if(strs[j][i] != strs[0][i])
                {
                    return str;
                }
            }
            str += strs[0][i];
        }
         return str;
    }
};