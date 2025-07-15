class Solution {
public:
    bool isValid(string word) {
        int vowelcount = 0;
        int consonantcount = 0;
       
        if(word.length()<3)
        {
            return false;
        }
        else if((word.find('@') != -1) || (word.find('#') != -1) || (word.find('$') != -1))
        {
            return false;
        }
        else
        {
            for(char ch : word)
            {
                if(isdigit(ch))
                {
                    continue;
                }
                int low = tolower(ch);
                if(low == 'a' || low =='e' || low == 'i' || low == 'o' || low == 'u')
                {
                    vowelcount++;
                }
                else if(isalpha(ch))
                {
                    consonantcount++;
                }
        } 
        }
        cout<<vowelcount<<endl;
        if(vowelcount >0 && consonantcount > 0)
        {
             return true;
        }
        else
        {
          return false;
        }
      

    }
};