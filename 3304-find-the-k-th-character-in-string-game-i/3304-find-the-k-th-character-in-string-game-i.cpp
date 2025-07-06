class Solution {
public:
    char kthCharacter(int k) {
       string s = "a";
       string d;
     
       while(s.length() <= k)
       {
           for(auto i: s)
          {
          d.push_back(char(i+1));
          }
       s.append(d);
       d.clear();
       }
       return s[k-1];
    }
};