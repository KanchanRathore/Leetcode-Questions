class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        string segment;
        vector<string>segments;
        int count =0;
       
        while(getline(ss, segment, ' '))
        {
            segments.push_back(segment);
        }
        for(auto w:segments)
        {
             int flag =  1;
           for(auto c:brokenLetters)
            {
                if(w.find(c) != -1)
                {
                    flag = 0;
                    break;
                   
                }
            }
            if(flag)
            {
                count++;
            }    
        }
        
        return count;
    }
};