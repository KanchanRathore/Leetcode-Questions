class Solution {
public:
    string reverseWords(string s) {
    vector<string>words;
    string word;
    int start = 0;
    int end;
    while((end = s.find(" ",start)!= string::npos))
    {
       end = s.find(" ",start);
       word = s.substr(start,end-start);
       if (!word.empty()) 
       {
         words.push_back(word);
        }
       start = end+1;
    }
    string w;
    string w0;
    end = s.find(" ",start);
    word = s.substr(start);
    if (!word.empty()) {
    words.push_back(word);
     }
    reverse(words.begin(),words.end());
    for(auto w:words)
    {
        w0 = w0+ w +" " ;
    }
        w0.pop_back();
    return w0;
    }
};