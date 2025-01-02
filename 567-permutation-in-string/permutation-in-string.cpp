class Solution {
private:
     bool checkequal(int count1[26], int count2[26])
    {
        for(int i = 0;i<26;i++)
        {
            if(count1[i] !=count2[i])
            {
                return 0;
            }

        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
    int count1[26] = {0};
    for(int i = 0;i<=s1.length()-1;i++)
    {
        int index = s1[i]-'a';
        count1[index]++;
    }

    int i = 0;
    int count2[26] = {0};
    while(i<s1.length() && i<=s2.length()-1)
    {
        int index = s2[i]-'a';
        count2[index]++;
        i++;

    }

    if(checkequal(count1,count2))
    {
        return 1;
    }
    
    while(i<=s2.length()-1){
      int  index = s2[i]-'a';
      count2[index]++;

      index = s2[i-s1.length()]-'a';
      count2[index]--;
      i++;

      if(checkequal(count1,count2))
      {
        return 1;
      }
      

    }

    return 0;
    }
  };
