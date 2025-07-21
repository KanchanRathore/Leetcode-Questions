class Solution {
public:
    string makeFancyString(string s) {
        int count = 1;
         for(int i = 0; i <= s.length()-1; i++)
         {
            if(s[i] == s[i+1])
            {
                count++;
            }
            while(count >= 3)
            {
                s.erase(i,1);
                count--;
            }
          
         }
         return s;
    }
};