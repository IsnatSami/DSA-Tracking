class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        if (x < 0) {
            return false;
        } else {
            while (x > 0) {
                s += char(x % 10) + 48;
                x /= 10;
            }
            string srev = s;
            reverse(s.begin(), s.end());
            if (s == srev)
                return true;
            else
                return false;
            //  cout<<s<<" "<<srev;
        }
    }
};
