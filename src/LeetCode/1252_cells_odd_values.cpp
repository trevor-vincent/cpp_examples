#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int oddCells(int n, int m, const vector<vector<int>>& indices) {
        vector<bool> N(n, false);
        vector<bool> M(m, false);
        
        for(int i=0; i<indices.size(); i++) {
            N[indices[i][0]] = N[indices[i][0]]^true;
            M[indices[i][1]] = M[indices[i][1]]^true;
        }
        
        int r = 0;
        int c = 0;
        
        for(int i=0; i<n; i++) {
            if(N[i])
                r++;
        }
        
        for(int j=0; j<m; j++) {
            if(M[j])
                c++;
        }
        
        return  r*m + c*n - 2*r*c;
    }
};




int main(int argc, char *argv[])
{
  std::cout << Solution().oddCells(5, 5, vector<vector<int>>{{1, 2}, {1, 2}}) << std::endl;
  return 0;
}
