class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n ==1)
        {
            return true;
        }
        if(n <= 0)
        {
          return false;
        }
        int g = 1;
        while(n != 1)
        {
            int n1 = n%4;
            if(n1 == 0)
            {
                n = n/4;
            }
            else
            {
              return false;
            }
        }
        return true;
    }
};