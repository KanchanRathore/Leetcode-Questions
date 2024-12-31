class Solution {
public:
    string removeOccurrences(string s, string part) {
       while(s.find(part) != std::string::npos)
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