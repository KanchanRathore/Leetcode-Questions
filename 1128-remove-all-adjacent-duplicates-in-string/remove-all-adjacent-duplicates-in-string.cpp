class Solution {
public:
    string removeDuplicates(string s) {
        int i =0;
        while(i<s.length())
        {
            if(s[i] == s[i+1] && i+1 <s.length())
            {
                s.replace(i,2,"");
                i = 0;
            }
            else
            {
                i++;
            }
        }
        return s;

    }
};