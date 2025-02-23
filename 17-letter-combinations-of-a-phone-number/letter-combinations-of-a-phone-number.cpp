class Solution {
    void solve(string digits, string output, vector<string> & ans, int index, string mapping[])
    {
              if(index >= digits.length())
              {
                ans.push_back(output);
                return;
              }

              int number = digits[index] - '0';
              string value = mapping[number];

              for(int i = 0; i<=value.length()-1; i++)
              {
                 output.push_back(value[i]);
                 solve(digits, output, ans, index+1, mapping);
                 output.pop_back();
              }
    }
public:
    vector<string> letterCombinations(string digits) {
        string output;
        vector<string> ans;
        int index = 0;

        string mapping[10] = {" ", " ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
         
         if(digits.length() == 0)
         {
            return ans;
         }
        solve(digits,output,ans,index,mapping);
        return ans;

    }
};