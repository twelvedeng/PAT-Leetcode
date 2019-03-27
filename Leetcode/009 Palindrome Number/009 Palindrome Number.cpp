class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        std::reverse(s.begin(), s.end());
        if(to_string(x) == s)
            return true;
        else
            return false;
    }
};
