class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
          sort(trainers.rbegin(),trainers.rend());
          int j = 0;
          int count = 0;
           int i = 0;
         while(i<=players.size()-1 && j<=trainers.size()-1)
         {
            if(players[i]<=trainers[j])
            {
                count++;
                i++;
            }
                j++;
           
          }
        return count;
    }
};