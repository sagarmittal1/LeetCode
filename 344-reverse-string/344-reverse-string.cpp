class Solution {
public:
    void revs(int ind, vector <char> &s) {
        if(ind >= s.size()/2) return;
        swap(s[ind], s[s.size()-ind-1]);
        revs(ind+1, s);
    }
public:
    void reverseString(vector<char>& s) {
        revs(0, s);
    }
};