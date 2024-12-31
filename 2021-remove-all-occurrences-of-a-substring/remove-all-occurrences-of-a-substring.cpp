class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
         for(int i = 0;i<=n-1;i++)
         {
            int d = s.find(part);
            if(d != std::string::npos)
            {
                s.replace(d,part.length(),"");
            }
         }
         return s;
    }
};