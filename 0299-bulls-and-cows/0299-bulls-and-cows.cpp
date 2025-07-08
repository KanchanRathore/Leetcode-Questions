class Solution {
public:
    string getHint(string secret, string guess) {
        int count1 = 0;
        int count2 = 0;
        for(int i =0; i<=secret.length()-1; i++)
        {
           if(secret[i] == guess[i])
           {
               count1++;
           }
           else if (guess.find(secret[i]) != -1)
           {
               count2++;
           }
           else
           {
            i++;
           }
        }
       string ans = to_string(count1)+"A"+to_string(count2)+"B";
       return ans;
    }
};