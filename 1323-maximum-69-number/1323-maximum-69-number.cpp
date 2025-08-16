class Solution {
public:
    int maximum69Number (int num) {
        string s = "";
        s = to_string(num);
        for(int i = 0; i<= s.length()-1; i++)
        {
           if(s[i] != '9')
           {
             s.replace(i,1,"9");
             break;
           }
        }
        cout<<s<<endl;
        int a = stoi(s);
        return a;

    }
};