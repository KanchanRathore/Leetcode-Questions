class Solution {
public:
    string getHint(string secret, string guess) {
        int count1 = 0;
        int count2 = 0;
        unordered_map<int,int>a;
        for(auto & ch : secret)
        {
            a[ch]++;
        }
        for(int i =0; i<=secret.length()-1; i++)
        {
           if(secret[i] == guess[i])
           {
               count1++;
               a[secret[i]]--;
           }
        }
           for(int i =0; i<=guess.length()-1; i++)
           {
              if(a[guess[i]] >0 && secret[i]!=guess[i])
              {
                count2++;
                a[guess[i]]--;
              }
           }
       string ans = to_string(count1)+"A"+to_string(count2)+"B";
       return ans;
    }
};