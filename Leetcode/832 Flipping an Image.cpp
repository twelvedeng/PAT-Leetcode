class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i = 0; i < A.size(); i++) {
            vector<int> done = A[i];
            std::reverse(done.begin(), done.end());
            for (int j = 0; j < done.size(); j++)
                if(done[j] == 1) done[j] = 0;
                else             done[j] = 1;
            A[i] = done;
        }
        return A;
    }
};
