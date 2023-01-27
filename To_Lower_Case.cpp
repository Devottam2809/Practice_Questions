// To Lower Case LeetCode   709 @devottam2809

class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    return s;
    }
};
