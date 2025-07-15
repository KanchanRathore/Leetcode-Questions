class Solution {
public:
    bool check(string word)
    {
         for(char c: word)
        {
            if(isalpha(c))
            {
                return true;
            }
        }
        return false;
         
    }
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
                if(word.find('a') != -1 || word.find('A') != -1  || word.find('e') != -1 || word.find('E') != -1 || word.find('o') != -1 || word.find('O') != -1 || word.find('u') != -1 ||word.find('U') != -1 ||  word.find('i') != -1 || word.find('I') != -1)
                {
                    vowelcount++;
                }
                if((word.find('a') == -1 || word.find('A') == -1  || word.find('e') == -1 || word.find('E') == -1 || word.find('o') == -1 || word.find('O') == -1 || word.find('u') == -1 ||word.find('U') == -1 ||  word.find('i') == -1 || word.find('I') == -1) && check(word))
                {
                    consonantcount++;
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