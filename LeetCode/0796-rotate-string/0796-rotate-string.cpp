class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        string plus = s + s;
        return plus.find(goal) != string::npos;
    }
};